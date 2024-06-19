#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

// Function prototypes
void insert(Node*& head, int data);
void deleteFirstInstance(Node*& head, int data);
void selectionSort(Node* head);
void printList(Node* head);
void displayMenu();

#endif // LINKEDLIST_H
