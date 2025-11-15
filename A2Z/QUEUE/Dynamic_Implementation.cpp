#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int x)
{
    struct Node *newnode;
    newnode = new Node();
    if (!newnode)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    newnode->data = x;
    newnode->next = NULL;

    if (front == NULL)
    {
        front = rear = newnode;
        return;
    }

    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    struct Node *temp;
    if (front == NULL)
    {
        cout << "Queue Underflow" << endl;
        return;
    }
    temp = front;
    cout << "Dequeued element is: " << temp->data << endl;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    free(temp);
    temp = NULL;
}

void peek()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front element is: " << front->data << endl;
}

void display()
{
    struct Node *temp;
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    temp = front;
    cout << "Queue elements are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    display();
    peek();
    return 0;
}