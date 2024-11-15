#include <iostream>
using namespace std;

#define SIZE 100 // Define the maximum size of the stack

// Class to implement stack using array
class ArrayStack {
private:
    int top; // Indicates the top of the stack
    int stack[SIZE]; // Array to hold stack elements

public:
    // Constructor to initialize the stack
    ArrayStack() {
        top = -1; // Initialize top to -1 indicating the stack is empty
    }

    // Method to push an element onto the stack
    void push(int value) {
        if (top >= SIZE - 1) { // Check for stack overflow
            cout << "Stack Overflow" << endl;
        } else {
            stack[++top] = value; // Increment top and add the value to the stack
        }
    }

    // Method to pop an element from the stack
    void pop() {
        if (top < 0) { // Check for stack underflow
            cout << "Stack Underflow" << endl;
        } else {
            top--; // Decrement top to remove the top element
        }
    }

    // Method to peek at the top element of the stack
    int peek() {
        if (top < 0) { // Check if the stack is empty
            cout << "Stack is empty" << endl;
            return -1; // Indicate empty stack
        }
        return stack[top]; // Return the top element of the stack
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return top == -1; // Return true if stack is empty
    }
};

int main() {
    ArrayStack s;

    // Example usage
    s.push(10); // Push 10 onto the stack
    s.push(20); // Push 20 onto the stack
    cout << s.peek() << endl; // Should output 20
    s.pop(); // Pop the top element (20)
    cout << s.peek() << endl; // Should output 10
    s.pop(); // Pop the top element (10)
    cout << s.isEmpty() << endl; // Should output 1 (true)

    return 0;
}
