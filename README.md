# Implementing and Utilizing Stacks and Queues in C++

## Project Overview
This repository contains C++ implementations of stacks and queues using both array-based and linked list-based approaches. The project includes various applications such as reversing strings and simulating a print queue.

## Contents
- **src/**
  - ArrayStack.cpp: Class for array-based stack operations.
  - LinkedListStack.cpp: Class for linked list-based stack operations.
  - ArrayQueue.cpp: Class for array-based queue operations.
  - LinkedListQueue.cpp: Class for linked list-based queue operations.
  - StringReversal.cpp: Function to reverse a string using a stack.
  - PrintQueue.cpp: Class to simulate a print queue.
- **tests/**
  - test_ArrayStack.cpp: Test cases for array-based stack.
  - test_LinkedListStack.cpp: Test cases for linked list-based stack.
  - test_ArrayQueue.cpp: Test cases for array-based queue.
  - test_LinkedListQueue.cpp: Test cases for linked list-based queue.
  - test_PrintQueue.cpp: Test cases for print queue simulation.
- report.pdf: Analysis of time and space complexity of data structures.

## How to Run the Tests
1. Compile the C++ files using g++:
```bash
g++ -o test_ArrayStack tests/test_ArrayStack.cpp src/ArrayStack.cpp
./test_ArrayStack

g++ -o test_LinkedListStack tests/test_LinkedListStack.cpp src/LinkedListStack.cpp
./test_LinkedListStack

g++ -o test_ArrayQueue tests/test_ArrayQueue.cpp src/ArrayQueue.cpp
./test_ArrayQueue

g++ -o test_LinkedListQueue tests/test_LinkedListQueue.cpp src/LinkedListQueue.cpp
./test_LinkedListQueue

g++ -o test_PrintQueue tests/test_PrintQueue.cpp src/PrintQueue.cpp 
./test_PrintQueue 
