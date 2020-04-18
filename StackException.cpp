//
// Created by Sherzod on 17.04.2020.
//

#include "StackException.h"

StackException::StackException(const char *msg) {
    msg_ = msg;
}

const char *StackException::what() const noexcept {
    return msg_;
}
