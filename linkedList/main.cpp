#include<iostream>
#include "linkedList.h"

#include "./lQueue.h"
#include "./lStack.h"

int main(){
    LinkedList l1;

    //Creatinh linked list
    std::cout<<"From Linked List"<<std::endl;
    l1.addToHead(2);
    l1.addToHead(1);
    l1.addToTail(3);
    l1.addToTail(4);
    l1.addToTail(5);

    l1.traverse();
    std::cout<<"Retriving ...\n";
    
    Node* op = new Node();
    op = l1.retrieve(120, op);
    std::cout<<op->info<<" "<<op<<std::endl;
    op = l1.retrieve(2, op);
    std::cout<<op->info<<" "<<op<<std::endl;

    //Creating Stack implementing Linked list
    std::cout<<"From stack"<<std::endl;
    Stack st;
    st.push(10);
    st.push(11);
    st.push(12);

    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    std::cout<<"****"<<std::endl;

    
    //Creating Queue implementing Linked list
    std::cout<<"From queue"<<std::endl;
    QueueL ql;

    ql.enqueue(10);
    ql.enqueue(11);
    ql.enqueue(12);

    std::cout<<"queue made"<<std::endl;

    std::cout<<ql.dequeue()<<std::endl;
    std::cout<<ql.dequeue()<<std::endl;
    std::cout<<ql.dequeue()<<std::endl;
    std::cout<<"****"<<std::endl;
    //Creating Queue implementing Linked list
}