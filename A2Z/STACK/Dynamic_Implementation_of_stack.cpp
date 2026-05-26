#include <iostream>
using namespace std;
#define SIZE 10;
struct node
{
    int data;
    node *next;
};
node *top = NULL;
void push(int x)
{
    struct node *newnode;
    newnode = new node();
    if (!newnode)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void pop()
{
    struct node *temp;
    if (top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return;
    }
    temp = top;
    top = top->next;
    cout << "Popped element is: " << temp->data << endl;
    delete (temp);
}

void peek()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element is: " << top->data << endl;
}

void display()
{
    struct node *temp;
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    temp = top;
    cout << "Stack elements are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();
    peek();
    return 0;
}
