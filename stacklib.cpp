#include "pch.h"
#include<iostream>
#include "stack.h"
using namespace std;

void Stack::push(int item) {
    list.insertAtBegin(item);
}
void Stack::pop() {
    if (isEmpty()) {
        cout << "stack is empty";
        return;
    };
    
    list.deleteAtBegin();
}
void Stack::display() {
    list.printList();
}
int Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is empty";
        return 1;
    };
    return list.head->data;


}
bool Stack::isEmpty() const {
    return (list.head == nullptr);
}


