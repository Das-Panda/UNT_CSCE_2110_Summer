#include "Node.h"

Node::Node(int data) : data(data), next(nullptr) {}

int Node::getData() const {
    return data;
}

void Node::setData(int data) {
    this->data = data;
}

Node* Node::getNext() const {
    return next;
}

void Node::setNext(Node* next) {
    this->next = next;
}
