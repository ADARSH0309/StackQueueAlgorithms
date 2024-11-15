#include "../src/LinkedListStack.cpp"

int main() {
   LinkedListStack stack;

   stack.push(1);
   stack.push(2);
   stack.pop();
   cout << stack.peek(); // Expected Output: 1

   return 0;
}
