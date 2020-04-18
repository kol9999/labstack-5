#include <iostream>
#include "Stack.hpp"
#include "StackException.h"

int main() {
    Stack<int, 10> s;
    for (int i = 0; i < 10; i++) {
        s.push(i);
    }
    for (int i = 0; !s.empty(); i++) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << "\n";
    try {
        s.pop();
    }
    catch (const StackException& ex) {
        std::cout << ex.what() << "\n";
    }
    for (int i = 0; i < 10; i++) {
        s.push(i);
    }
    try {
        s.push(10);
    }
    catch (const StackException& ex) {
        std::cout <<  ex.what();
    }

    return 0;
}
