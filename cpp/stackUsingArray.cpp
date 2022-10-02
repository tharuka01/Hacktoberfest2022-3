#include <iostream>
using namespace std;

const int size = 10000;

class Stack
{
    int arr[size];
    int top;

public:
    Stack() { top = -1; }
    bool isEmpty()
    {
        return top < 0;
    }
    void push(int x);
    int pop();
    int peek();
};
void Stack ::push(int x)
{
    if (top == (size - 1))
    {
        cout << "Stsck is full";
        return;
    }
    arr[++top] = x;
}
int Stack ::pop()
{
    if (top == -1)
    {
        cout << "Stack is empty";
        return 0;
    }
    int store = arr[top];
    top--;
    return store;
}
int Stack ::peek()
{
    if (top == -1)
    {
        cout << "Stack is empty";
        return 0;
    }
    return arr[top];
}
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}