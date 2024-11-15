#include <iostream>
using namespace std;

// Node class representing an element of the stack
class Node {
public:
    int data; // Data part of the node
    Node* next; // Pointer to the next node in the stack

    // Constructor to initialize a node with a given value
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedListStack class implementing a stack using linked list
class LinkedListStack {
private:
    Node* top; // Pointer to the top of the stack

public:
    // Constructor to initialize the stack
    LinkedListStack() : top(nullptr) {}

    // Method to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value); // Create a new node with the given value
        newNode->next = top; // Make the new node point to the current top node
        top = newNode; // Update the top to the new node
    }

    // Method to pop an element from the stack
    void pop() {
        if (top == nullptr) { // Check if the stack is empty
            cout << "Stack Underflow" << endl; // Print stack underflow message
            return;
        }
        Node* temp = top; // Temporarily store the top node
        top = top->next; // Update the top to the next node
        delete temp; // Delete the old top node
    }

    // Method to peek at the top element of the stack without removing it
    int peek() {
        if (top == nullptr) { // Check if the stack is empty
            cout << "Stack is empty" << endl; // Print stack empty message
            return -1; // Indicate empty stack
        }
        return top->data; // Return the data of the top node
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return top == nullptr; // Return true if the stack is empty
    }
};

int main() {
    LinkedListStack stack;

    // Example usage
    stack.push(10); // Push 10 onto the stack
    stack.push(20); // Push 20 onto the stack
    cout << stack.peek() << endl; // Should output 20
    stack.pop(); // Pop the top element (20)
    cout << stack.peek() << endl; // Should output 10
    stack.pop(); // Pop the top element (10)
    cout << stack.isEmpty() << endl; // Should output 1 (true)

    return 0;
}
