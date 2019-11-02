#include "MyStr.h"

void MyStr::push_back(std::string &s) {
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

void MyStr::chk_n_alloc() {
    if (size() == capacity()) {
        reallocate();
    }
}

void MyStr::free() {
}

std::pair<std::string *, std::string *> MyStr::alloc_n_copy(std::string *b, std::string *e) {
}