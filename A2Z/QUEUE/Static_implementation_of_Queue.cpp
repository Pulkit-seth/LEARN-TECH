#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define SIZE 10
int queue_arr[SIZE];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (rear == SIZE - 1)
    {
        cout << "Queue is Full" << endl;
        return;
    }
    else
    {
        rear++;
        queue_arr[rear] = x;
        if (front == -1)
            front = 0;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
        cout << "Queue is Empty" << endl;
    else if (front == rear)
    {
        cout << "Dequeued element is: " << queue_arr[front] << endl;
        front = -1;
        rear = -1;
    }
    else
    {
        cout << "Dequeued element is: " << queue_arr[front] << endl;
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
        cout << "Queue is Empty" << endl;
    else
        cout << "Front element is: " << queue_arr[front] << endl;
}
void display()
{
    if (front == -1 && rear == -1)
        cout << "Queue is Empty" << endl;
    else
    {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue_arr[i] << " ";
        }
        cout << endl;
    }
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
