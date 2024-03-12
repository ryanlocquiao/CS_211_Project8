#include "Stack.h"
#include "Queue.h"
#include <iostream>

using std::cout;

int main() {
    Stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    for (int index = 0; index < 3; ++index) {
        cout << stack.pop() << "\n";
    }

    stack.push(50);
    cout << stack.peek() << "\n";
    stack.clear();
    cout << stack.peek() << "\n";

    Queue<int> queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    for (int index = 0; index < 3; ++index) {
        cout << queue.peek() << "\n";
        queue.dequeue();
    }

    cout << queue.peek();

    return 0;
}