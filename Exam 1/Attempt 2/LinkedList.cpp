#include <iostream>
#include "LinkedList.h"

using namespace std;

// Function to insert data into the list
void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    cout << "Inserted: " << data << endl; // Debugging output
}

// Function to delete the first instance of specified data
void deleteFirstInstance(Node*& head, int data) {
    if (!head) {
        cout << "List is empty. Nothing to delete." << endl; // Debugging output
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == data) {
        head = temp->next;
        delete temp;
        cout << "Deleted: " << data << endl; // Debugging output
        return;
    }

    while (temp != nullptr && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Data not found." << endl; // Debugging output
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Deleted: " << data << endl; // Debugging output
}

// Function to sort the list using selection sort
void selectionSort(Node* head) {
    if (!head) {
        cout << "List is empty. Nothing to sort." << endl; // Debugging output
        return;
    }

    Node* i = head;
    while (i != nullptr) {
        Node* min = i;
        Node* j = i->next;
        while (j != nullptr) {
            if (j->data < min->data) {
                min = j;
            }
            j = j->next;
        }
        if (min != i) {
            int temp = i->data;
            i->data = min->data;
            min->data = temp;
        }
        i = i->next;
    }
    cout << "List sorted." << endl; // Debugging output
}

// Function to print the list
void printList(Node* head) {
    if (!head) {
        cout << "List is empty." << endl; // Debugging output
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Ensure new line after printing the list
}

// Function to display the menu
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Insert data\n";
    cout << "2. Delete first instance of data\n";
    cout << "3. Print current list\n";
    cout << "4. Sort and print list\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}
