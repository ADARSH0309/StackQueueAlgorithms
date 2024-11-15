#include <iostream>
using namespace std;

#define SIZE 100 // Define the maximum size of the queue

// Class to implement queue using array
class ArrayQueue {
private:
    int front, rear, count; // Variables to keep track of the front, rear and count of elements in the queue
    int queue[SIZE]; // Array to hold queue elements

public:
    // Constructor to initialize the queue
    ArrayQueue() : front(0), rear(-1), count(0) {}

    // Method to add an element to the queue
    void enqueue(int value) {
        if (count >= SIZE) { // Check for queue overflow
            cout << "Queue Overflow" << endl;
            return;
        }
        rear = (rear + 1) % SIZE; // Update the rear position circularly
        queue[rear] = value; // Add the element to the queue
        count++; // Increase the count of elements
    }

    // Method to remove an element from the queue
    void dequeue() {
        if (count <= 0) { // Check for queue underflow
            cout << "Queue Underflow" << endl;
            return;
        }
        front = (front + 1) % SIZE; // Update the front position circularly
        count--; // Decrease the count of elements
    }

    // Method to peek at the front element of the queue
    int peek() {
        if (count <= 0) { // Check if the queue is empty
            cout << "Queue is empty" << endl;
            return -1; // Indicate empty queue
        }
        return queue[front]; // Return the front element of the queue
    }

    // Method to check if the queue is empty
    bool isEmpty() {
        return count == 0; // Return true if the queue is empty
    }
};

int main() {
    ArrayQueue q;

    // Example usage
    q.enqueue(10); // Add 10 to the queue
    q.enqueue(20); // Add 20 to the queue
    cout << q.peek() << endl; // Should output 10
    q.dequeue(); // Remove the front element (10)
    cout << q.peek() << endl; // Should output 20
    q.dequeue(); // Remove the front element (20)
    cout << q.isEmpty() << endl; // Should output 1 (true)

    return 0;
}
