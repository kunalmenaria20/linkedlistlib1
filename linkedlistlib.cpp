#include "pch.h"
#include "linkedlist.h"

using namespace System;
using namespace std;
node::node(int value) {
    data = value;
    next = nullptr;
};

Linkedlist::Linkedlist() {
    head = nullptr;
}
void Linkedlist::insertAtBegin(int value) {
    node* newNode = new node(value);  //"new" is used used to dynamically allocate memory to new node//
    newNode->next = head;
    head = newNode;
};
void Linkedlist::insertAtEnd(int value) {
    node* newNode = new node(value);
    if (!head) {
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
};

void Linkedlist::deleteAtBegin() {
    if (!head) {
        cout << "list is empty";
        return;
    };
    node* temp = head;
    head = head->next;
    delete temp;
}
void Linkedlist::deleteAtEnd() {
    if (!head) {
        cout << "list is empty";
        return;
    };
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    node* temp = head;
    while (temp->next->next) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
void Linkedlist::search(int key) {
    if (!head) {
        cout << "list is empty";
        return;
    };
    node* temp = head;
    int index = 0;
    while (temp) {
        if (temp->data == key) {
            cout << "data matches at location: " << index;
            return;
        };
        temp = temp->next;
        index++;
    };
};
void Linkedlist::printList() {
    if (!head) {
        cout << "list is empty";
        return;
    }
    
    node* temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
};
void Linkedlist::insertAfter(int loc, int value) {
    node* temp = head;
    node* newNode = new node(value);
    if (!head) {
        head = newNode;
        newNode->next = nullptr;
        return;
    }
    for (int i = 0; i < loc; i++) {
        if (temp == nullptr) {
            cout << "Position does not exist!" << endl;
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
};
void Linkedlist::deleteAtIndex(int loc) {
    node* temp = head;
    if (!head) {
        cout << "list is Empty";
        return;
    }
    if (head->next == nullptr && loc == 0) {
        delete temp;
        head = nullptr;
        cout << "List is now empty";
        return;
    }
    for (int i = 0; i < loc; i++) {
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp = toDelete->next;
    delete toDelete;
};