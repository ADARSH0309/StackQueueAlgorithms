#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Class representing a print queue
class PrintQueue {
private:
    queue<string> printQueue; // Queue to store documents as strings

public:
    // Method to add a document to the print queue
    void enqueue(const string& document) {
        printQueue.push(document); // Add the document to the end of the queue
    }

    // Method to remove a document from the print queue
    string dequeue() {
        if (printQueue.empty()) { // Check if the queue is empty
            cout << "Print Queue is empty" << endl; // Print an empty queue message
            return ""; // Return an empty string to indicate no document
        }
        string doc = printQueue.front(); // Get the document at the front of the queue
        printQueue.pop(); // Remove the front document from the queue
        return doc; // Return the document
    }

    // Method to check if the print queue is empty
    bool isEmpty() const {
        return printQueue.empty(); // Return true if the queue is empty
    }
};

int main() {
    PrintQueue pq;

    // Example usage
    pq.enqueue("Document 1");
    pq.enqueue("Document 2");
    pq.enqueue("Document 3");

    cout << pq.dequeue() << endl; // Should output: Document 1
    cout << pq.dequeue() << endl; // Should output: Document 2
    cout << pq.isEmpty() << endl; // Should output: 0 (false)
    cout << pq.dequeue() << endl; // Should output: Document 3
    cout << pq.isEmpty() << endl; // Should output: 1 (true)

    return 0;
}
