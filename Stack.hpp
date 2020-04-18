//
// Created by Sherzod on 17.04.2020.
//

#ifndef LAB5_STACK_HPP
#define LAB5_STACK_HPP


template <class T, int N>
class Stack {
private:
    T* stack_;
    size_t top_;
public:
    Stack();
    void push(const T& obj);
    void pop();
    bool empty() const;
    T top() const;
};

#include "Stack.tpp"

#endif //LAB5_STACK_HPP
