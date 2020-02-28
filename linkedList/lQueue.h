 
/*
* The following implementation of the linear Queue 
*/
#pragma once
#include "./linkedList.h"


class QueueL:public LinkedList{
    public:

    /*
    * Constructor
    * Queue is initailized
    */
    QueueL();

    //add the provided element [el] to the top of the queue
    void enqueue(int el);

    //remove and return top element of the queue
    int dequeue();
    
    //return the front element of the queue
    int getFront();

    //return the rear element of the queue
    int getRear();


};