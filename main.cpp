#include "pch.h"
#include "stack.h"
#include "Queue.h"
using namespace std;
int main()
{
    Stack s1;
    queue q1;
    cout << "STACK: ";
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.display();
    s1.pop();
    s1.display();
    cout << "Peek: "<<s1.peek();
    
    
    cout << "\n";
    cout << "QUEUE: ";
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    
    q1.printqueue();
    
    q1.dequeue();
    q1.printqueue();
    cout<<"Peek: "<< q1.peek();


    return 0;
}