#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node* next;

public:
    Node(int data);
    int getData() const;
    void setData(int data);
    Node* getNext() const;
    void setNext(Node* next);

    friend class Queue;
};

#endif // NODE_H
