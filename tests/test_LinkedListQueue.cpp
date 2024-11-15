#include "../src/LinkedListQueue.cpp"

int main() {
   LinkedListQueue queue;

   queue.enqueue(1);
   queue.enqueue(2);
   queue.dequeue();
   cout << queue.peek(); // Expected Output: 2

   return 0;
}
