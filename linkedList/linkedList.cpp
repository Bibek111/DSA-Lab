#include "linkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    this->head = NULL;
    this->tail = NULL;
}

// (a) isEmpty(): Returns true if the list is empty, and false otherwise
bool LinkedList::isEmpty(){
    return (this->head == NULL);
}

// (b) addToHead(data): Inserts an element to the beginning of the list
void LinkedList::addToHead(int data){
    Node *node = new Node();
    node->info = data;
    node->next = this->head;
    this->head = node;
    if(this->tail == NULL) this->tail = node;
}

// (c) addToTail(data): Inserts an element to the end of the list
void LinkedList::addToTail(int data){
    if(this->isEmpty()){
        this->addToHead(data);
    }else{
        Node *node = new Node();
        node->info = data;
        this->tail->next = node;
        this->tail = node;
    }
}

// (d) add(data, predecessor): Inserts an element after the given predecessor node
void LinkedList::add(int data, Node* pre){
    Node *node = new Node();
    node->info = data;
    node->next = pre->next;
    pre->next = node;
}

// (e) removeFromHead(): Removes the first node in the list
void LinkedList::removeFromHead(){
    Node* nodeToDelete = this->head;
    this->head = nodeToDelete->next;
    delete nodeToDelete;
}

// (f) remove(data): Removes the node with the given data
void LinkedList::remove(int data){
    //check if list is empty
    if(this->isEmpty()){
        std::cerr<<"List was empty";
    }else{
        //check if the data present in head
        if(this->head->info == data){
            this->removeFromHead();
            if(this->head == NULL) this->tail = NULL;
        }else{
            Node* temp = this->head->next;
            Node* prev = this->head;

            while (temp != NULL){
                if(temp->info == data){
                    //remove temp node
                    prev->next = temp->next;
                    delete temp;
                    if(prev->next == NULL) this->tail = prev; 
                }else{
                    prev = prev->next;
                    temp = temp->next;
                }
            }
            
        }
    }
}

// (g) retrieve(data, outputNodePointer): Returns the pointer to the node with the requested data
Node* LinkedList::retrieve(int data, Node* opPtr){
    //check if list is empty
    if(this->isEmpty()){
        std::cerr<<"List was empty";
        return 0;
    }else{
        //check if the data present in head
        if(this->head->info == data){
            *opPtr = *this->head;
            return opPtr;
        }else{
            Node* temp = this->head->next;
            while (temp != NULL){
                if(temp->info == data){
                    *opPtr = *temp;
                    return opPtr;
                }else{
                    temp = temp->next;
                }
            }
            opPtr->info =-1;
            return opPtr;
        }
    }
} 

// (h) search(data): Returns true if the data exists in the list, and false otherwise
bool LinkedList::search(int data){
    //check if list is empty
    if(this->isEmpty()){
        std::cerr<<"List was empty";
        return 0;
    }else{
        //check if the data present in head
        if(this->head->info == data){
            return true;
        }else{
            Node* temp = this->head->next;
            while (temp != NULL){
                if(temp->info == data){
                    return true;
                }else{
                    temp = temp->next;
                }
            }
            return false;
        }
    }
}

// (i) traverse(): Displays the contents of the list
void LinkedList::traverse(){
    //check if list is empty
    if(this->isEmpty()){
        std::cerr<<"List was empty";
    }else{
        Node* temp = this->head;
        while(temp != NULL){
            std::cout<<temp->info<<std::endl;
            temp = temp->next;
        }
        std::cout<<std::endl;
    }
}

int LinkedList::getHeadData(){return this->head->info;}
int LinkedList::getTailData(){return this->tail->info;}