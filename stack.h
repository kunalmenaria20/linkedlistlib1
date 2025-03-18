#ifndef STACK_H
#define STACK_H
#include "pch.h"
#include"linkedlist.h"
class Stack {
    Linkedlist list;
public:
    node* top;
    Stack() {
        top = nullptr;
    };
    void push(int item);
    void pop();
    void display();
    int  peek();
    bool isEmpty() const;
   
};
#endif