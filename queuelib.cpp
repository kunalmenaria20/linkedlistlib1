#include "pch.h"
#include "queue.h"
using namespace std;




void queue::enqueue(int value) {
    list.insertAtEnd(value);
}

void queue::dequeue() {
    if (isEmpty()) {
        cout << "queue is already empty";
        return;
    }
    
    list.deleteAtBegin();

};
void queue::printqueue() {
    
    list.printList();
    
}
int queue::peek() {
    if (isEmpty()) {
        cout << "queue is empty\n";
        return 1;
    };
    return list.head->data;

}
bool queue::isEmpty() {
    return (list.head==nullptr);
};

