//
// Created by Sherzod on 17.04.2020.
//

#ifndef LAB5_STACKEXCEPTION_H
#define LAB5_STACKEXCEPTION_H


#include <exception>

class StackException : std::exception {
private:
    const char* msg_;
public:
    StackException(const char* msg);
    const char* what() const noexcept override;
};


#endif //LAB5_STACKEXCEPTION_H
