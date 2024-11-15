#include "../src/ArrayStack.cpp"

int main() {
   ArrayStack stack;

   stack.push(1);
   stack.push(2);
   stack.pop();
   cout << stack.peek(); // Expected Output: 1

   return 0;
}
