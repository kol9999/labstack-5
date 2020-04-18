//
// Created by Sherzod on 17.04.2020.
//

#include "Stack.hpp"
#include "StackException.h"

template<class T, int N>
Stack<T, N>::Stack() {
    stack_ = new T[N];
    top_ = -1;
}

template<class T, int N>
void Stack<T, N>::push(const T& obj) {
    top_++;
    if (top_ == N)
        throw StackException("Stack overflow");
    else
        stack_[top_] = obj;
}

template<class T, int N>
bool Stack<T, N>::empty() const {
    return top_ == -1;
}

template<class T, int N>
void Stack<T, N>::pop() {
    if (empty())
        throw StackException("Stack underflow");
    else
        top_--;
}

template<class T, int N>
T Stack<T, N>::top() const {
    return stack_[top_];
}
