/*
 * Author: Ryan Locquiao
 * File  :
 * Date  :
 * Description:
 */

#ifndef CS_211_PROJECT8_STACK_H
#define CS_211_PROJECT8_STACK_H

#endif //CS_211_PROJECT8_STACK_H

// TODO: Fix -1 for Stack and Queue

const int EMPTY = -1;
const int STACKMAX = 10;
const int FULL = STACKMAX - 1;

template <class T>
class Stack {
private:
    int top;
    T stackArray[STACKMAX];

public:
    // Constructors
    Stack();

    // Public Functions
    bool push(T data);

    T pop();

    T peek();

    void clear();

    bool empty();

    bool full();
};

// Constructors
template <class T>
Stack<T>::Stack() : top(EMPTY), stackArray{0} {}

// Public Functions
template <class T>
bool Stack<T>::push(T data) {
    if (this->full()) {
        return false;
    }

    this->stackArray[++top] = data;
    return true;
}

template <class T>
T Stack<T>::pop() {   // TODO: Refactor for negatives, needs to not use -1
    if (this->empty()) {
        return EMPTY;
    }

    return this->stackArray[top--];
}

template <class T>
T Stack<T>::peek() {
    if (this->empty()) {
        return EMPTY;
    }

    return this->stackArray[top];
}

template <class T>
void Stack<T>::clear() {
    top = EMPTY;
}

template <class T>
bool Stack<T>::empty() {
    return this->top == EMPTY;
}

template <class T>
bool Stack<T>::full() {
    return this->top == FULL;
}