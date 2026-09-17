// Queue implementation using array

#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int front;
    int rear;

public:
    // Constructor
    Queue() {
        front = 0;
        rear = 0;
    }

    // Insert element
    void enqueue(int x) {
        if (rear == 100) {
            cout << "Queue is full" << endl;
            return;
        }

        arr[rear] = x;
        rear++;
    }

    // Remove element
    void dequeue() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
    }

    // Get front element
    int peek() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == rear;
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();

    cout << "Front element after dequeue: "
         << q.peek() << endl;

    q.dequeue();

    cout << "Front element after dequeue: "
         << q.peek() << endl;

    cout << "Is queue empty? "
         << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}