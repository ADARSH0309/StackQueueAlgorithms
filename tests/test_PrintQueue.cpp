#include "../src/PrintQueue.cpp"

int main() {
   PrintQueue pq;

   pq.enqueue("doc1");
   pq.enqueue("doc2");
   
   cout << pq.dequeue(); // Expected Output: doc1

   return 0;
}
