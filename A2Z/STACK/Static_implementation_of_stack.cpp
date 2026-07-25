#include <iostream>
using namespace std;
#define MAX 10
int stack_arr[MAX];
int top = -1;

void(push(int x))
{
    if (top >= MAX - 1)
        cout << "Stack overflow" << endl;
    else
    {
        top++;
        stack_arr[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        int popped_value = stack_arr[top];
        top--;
        cout << "Popped the element" << popped_value << endl;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top element is: " << stack_arr[top] << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack_arr[i] << " ";
        }
        cout << endl;
    }
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
