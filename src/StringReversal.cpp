#include <iostream>
#include <stack>
using namespace std;

// Function to reverse a given string using a stack
string reverseString(const string& str) {
    stack<char> s; // Stack to hold characters of the string

    // Push each character of the string onto the stack
    for (char c : str) {
        s.push(c);
    }

    string reversedStr = ""; // String to hold the reversed result

    // Pop each character from the stack and add to the result string
    while (!s.empty()) {
        reversedStr += s.top(); // Get the top character from the stack
        s.pop(); // Remove the top character from the stack
    }

    return reversedStr; // Return the reversed string
}

int main() {
    // Example usage of the reverseString function
    string original = "hello";
    string reversed = reverseString(original);
    cout << "Original: " << original << endl; // Should output: hello
    cout << "Reversed: " << reversed << endl; // Should output: olleh

    return 0;
}
