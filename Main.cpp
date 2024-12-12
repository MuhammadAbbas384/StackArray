#pragma once
#include<conio.h>
#include"Stack.h"

int main() 
{
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.display();

    stack.pop();
    stack.display();

    stack.push(20);
    stack.display();

    getch();
    return 0;
}