#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
int sizeOfBinaryTree(Node* root) {
    if (root == nullptr) {
        return 0; // Base case: empty tree has size 0
    }
    
    // Recursive case: size of left subtree + size of right subtree + 1 for the current node
    return sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right) + 1;
}

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Size of the binary tree: " << sizeOfBinaryTree(root) << endl; // Output: 5

    // Clean up memory (delete nodes)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}