#pragma once
class Node{
    public:
        int info;
        Node* next;
};

class LinkedList{
    // (a) isEmpty(): Returns true if the list is empty, and false otherwise
    // (b) addToHead(data): Inserts an element to the beginning of the list
    // (c) addToTail(data): Inserts an element to the end of the list
    // (d) add(data, predecessor): Inserts an element after the given predecessor node
    // (e) removeFromHead(): Removes the first node in the list
    // (f) remove(data): Removes the node with the given data
    // (g) retrieve(data, outputNodePointer): Returns the pointer to the node
    // with the requested data
    // (h) search(data): Returns true if the data exists in the list, and false otherwise
    // (i) traverse(): Displays the contents of the list
    private:
    Node *head;
    Node *tail;
    
    public:
    LinkedList();
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node* predecessor);
    void removeFromHead();
    void remove(int data);
    Node* retrieve(int data, Node* outputNodePointer);
    bool search(int data);
    void traverse();

    int getHeadData();
    int getTailData();
};