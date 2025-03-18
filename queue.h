#ifndef QUEUE_H
#define QUEUE_H
#include "pch.h"
#include"linkedlist.h"
class queue {
    Linkedlist list;
    node* front, * rear;
public:
    queue() {
        front = nullptr;
        rear = nullptr;

    }
    void enqueue(int value);
    void dequeue();
    void printqueue();
    int peek();
    bool isEmpty();
    
};
#endif