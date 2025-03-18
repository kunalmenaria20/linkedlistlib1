#include "pch.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
struct node {
    int data;
    node* next;
    node(int value);
};
class Linkedlist {
public:
    node* head;
    Linkedlist();
    void insertAtBegin(int value);
    void insertAtEnd(int value);
    void deleteAtBegin();
    void deleteAtEnd();
    void search(int key);
    void printList();
    void insertAfter(int loc,int value);
    void deleteAtIndex(int loc);
};
#endif