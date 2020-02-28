 
#pragma once
#include "./linkedList.h"
class Stack:public LinkedList{
    public:

    /*
    * Constructor
    * Stack is initailized
    */
    Stack();

    //add the provided element [el] to the top of the stack
    void push(int el);

    //remove and return top element of the stack
    int pop();
    
    //return the top element of the stack
    int peek();
};