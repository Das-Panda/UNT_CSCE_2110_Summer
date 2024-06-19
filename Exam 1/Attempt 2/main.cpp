#include <iostream>
#include <limits>
#include "LinkedList.h"

using namespace std;

int main() {
    Node* head = nullptr;
    int choice, data;

    while (true) {
        displayMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 5." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter data to insert: ";
                cin >> data;
                if (cin.fail()) {
                    cin.clear(); // Clear the error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                    cout << "Invalid input. Please enter an integer." << endl;
                } else {
                    insert(head, data);
                }
                break;
            case 2:
                cout << "Enter data to delete: ";
                cin >> data;
                if (cin.fail()) {
                    cin.clear(); // Clear the error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                    cout << "Invalid input. Please enter an integer." << endl;
                } else {
                    deleteFirstInstance(head, data);
                }
                break;
            case 3:
                cout << "Current list: ";
                printList(head);
                break;
            case 4:
                selectionSort(head);
                cout << "Sorted list: ";
                printList(head);
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
