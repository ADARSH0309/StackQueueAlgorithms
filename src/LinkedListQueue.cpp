#include <iostream>
using namespace std;

// Class representing a node in the queue
class QueueNode {
public:
    int data; // Data stored in the node
    QueueNode* next; // Pointer to the next node in the queue

    // Constructor to initialize a node with a given value
    QueueNode(int value) : data(value), next(nullptr) {}
};

// Class implementing a queue using a linked list
class LinkedListQueue {
private:
    QueueNode* front; // Pointer to the front of the queue
    QueueNode* rear; // Pointer to the rear of the queue

public:
    // Constructor to initialize the queue
    LinkedListQueue() : front(nullptr), rear(nullptr) {}

    // Method to add an element to the queue
    void enqueue(int value) {
        QueueNode* newNode = new QueueNode(value); // Create a new node with the given value
        if (rear != nullptr) // If the queue is not empty
            rear->next = newNode; // Link the new node after the rear node
        rear = newNode; // Update the rear to the new node
        if (front == nullptr) // If the queue was empty
            front = rear; // Update the front to the new node
    }

    // Method to remove an element from the queue
    void dequeue() {
        if (front == nullptr) { // Check if the queue is empty
            cout << "Queue Underflow" << endl; // Print queue underflow message
            return;
        }
        
        QueueNode* temp = front; // Temporarily store the front node
        front = front->next; // Update the front to the next node
        delete temp; // Delete the old front node

        if (front == nullptr) // If the queue is now empty
            rear = nullptr; // Update the rear to nullptr
    }

    // Method to peek at the front element of the queue without removing it
    int peek() {
        if (front == nullptr) { // Check if the queue is empty
            cout << "Queue is empty" << endl; // Print queue empty message
            return -1; // Indicate empty queue
        }
        
        return front->data; // Return the data of the front node
    }

    // Method to check if the queue is empty
    bool isEmpty() {
        return front == nullptr; // Return true if the queue is empty
    }
};

int main() {
    LinkedListQueue q;

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
