#pragma once
#include"Stack.h"
Stack::Stack()
{
    capacity = 10;
    data = new int[capacity];
    topIndex = -1;
}


Stack::~Stack() 
{
    delete[] data;
}


bool Stack::isEmpty() 
{
    return topIndex == -1;
}


bool Stack::isFull() 
{
    return topIndex == capacity - 1;
}


void Stack::push(int value) 
{
    if (isFull()) 
    {
        cout << " Cannot add " << value << endl;
        return;
    }
    data[++topIndex] = value;
    cout << "Added: " << value << endl;
}


void Stack::pop() 
{
    if (isEmpty()) 
    {
        cout << "No element to remove." << endl;
        return;
    }
    cout << "Removed: " << data[topIndex--] << endl;
}


void Stack::display() 
{
    if (isEmpty()) 
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: " << endl;
    for (int i = 0; i <= topIndex; i++) 
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
