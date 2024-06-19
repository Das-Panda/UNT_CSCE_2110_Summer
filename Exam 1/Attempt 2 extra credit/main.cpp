#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue queue;
    int num;

    cout << "Enter positive numbers to add to the queue (enter a negative number to stop):" << endl;
    while (true) {
        cin >> num;
        if (num < 0) break;
        queue.enqueue(num);
    }

    cout << "Enter number of elements to dequeue: ";
    int count;
    cin >> count;

    for (int i = 0; i < count; ++i) {
        if (queue.isEmpty()) {
            cout << "queue is empty!" << endl;
            break;
        }
        queue.dequeue();
    }

    cout << "Remaining queue: ";
    queue.printQueue();

    return 0;
}
