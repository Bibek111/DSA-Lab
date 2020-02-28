#include<iostream>
#include "lQueue.h"

#include "linkedList.h"

QueueL::QueueL():LinkedList(){
}

void QueueL::enqueue(int el){
    this->addToTail(el);
}

int QueueL::dequeue(){
    if(this->isEmpty()){
        throw "Queue is empty";
    }
    int headData = this->getHeadData();
    this->removeFromHead();
    return headData;
    
}

int QueueL::getFront(){
    return this->getHeadData();
}


int QueueL::getRear(){
    return this->getTailData();
}