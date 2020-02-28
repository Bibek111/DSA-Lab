#include<iostream>
#include "lStack.h"
#include "linkedList.h"

Stack::Stack():LinkedList(){
    
}

int Stack::peek(){
    if(isEmpty()){
        throw "The stack is empty";
    }
    return this->getHeadData();

}

void Stack::push(int el){
    this->addToHead(el);
}

int Stack::pop(){
    if(this->isEmpty()){
        throw "Stack is empty";
    }
    int prevTop = this->getHeadData();
    this->removeFromHead();
    return prevTop;
}