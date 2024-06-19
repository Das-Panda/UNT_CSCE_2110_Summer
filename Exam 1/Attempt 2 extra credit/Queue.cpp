#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue() : front(nullptr), rear(nullptr) {}

Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void Queue::enqueue(int data) {
    Node* newNode = new Node(data);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->setNext(newNode);
        rear = newNode;
    }
    cout << data << " added to queue" << endl;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "queue is empty!" << endl;
        return -1;
    }
    Node* temp = front;
    int data = front->getData();
    front = front->getNext();
    delete temp;
    cout << data << " removed from queue" << endl;
    return data;
}

bool Queue::isEmpty() const {
    return front == nullptr;
}

void Queue::printQueue() const {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}
