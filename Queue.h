/*
 * Author: Ryan Locquiao
 * File  :
 * Date  :
 * Description:
 */

#ifndef CS_211_PROJECT8_QUEUE_H
#define CS_211_PROJECT8_QUEUE_H

#endif //CS_211_PROJECT8_QUEUE_H

const int MAXQUEUE = 10;
const int QFULL = MAXQUEUE;
const int QEMPTY = 0;
const int EMPTYQ = -1;

template <class T>
class Queue {
private:
    T items[MAXQUEUE];
    int head;
    int tail;

public:
    // Constructors
    Queue();

    // Public Functions
    bool enqueue(T item);
    T dequeue();
    T peek();
    bool isEmpty();
    bool isFull();
    void clear();
};

template <class T>
Queue<T>::Queue() : head(QEMPTY), tail(QEMPTY) {}

template <class T>
bool Queue<T>::enqueue(T item) {
    if (this->isFull()) {
        return false;
    }

    items[tail] = item;
    tail = (tail + 1) % MAXQUEUE;
    return true;
}

template <class T>
T Queue<T>::dequeue() {
    if (this->isEmpty()) {
        return EMPTYQ;
    }

    T item = items[head];
    head = (head + 1) % MAXQUEUE;
    return item;
}

template <class T>
T Queue<T>::peek() {
    if (this->isEmpty()) {
        return EMPTYQ;
    }

    return items[head];
}

template <class T>
bool Queue<T>::isEmpty() {
    return head == tail;
}

template <class T>
bool Queue<T>::isFull() {
    return tail == MAXQUEUE;
}

template <class T>
void Queue<T>::clear() {

}