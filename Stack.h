#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class Stack {
private:
    int* data;  
    int capacity; 
    int topIndex; 

public:
    Stack(); 
    ~Stack(); 
    void push(int value);
    void pop(); 
    bool isEmpty();
    bool isFull(); 
    void display();
};