#include "MyStr.h"

std::allocator<std::string> MyStr::alloc;
MyStr::MyStr(const MyStr &vec) {
    auto new_data = alloc_n_copy(vec.begin(), vec.end());
    elements = new_data.first;
    first_free = cap = new_data.second;
}

MyStr::~MyStr() {
    free();
}

MyStr &MyStr::operator=(const MyStr &rhs) {
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

MyStr::MyStr(MyStr &&s) : elements(s.elements), first_free(s.first_free), cap(s.cap) {
    s.elements = s.first_free = s.cap = nullptr;
}

MyStr &MyStr::operator=(MyStr &&s) {
    if (this != &s) {
        free();
        elements = s.elements;
        first_free = s.first_free;
        cap = s.cap;
        s.elements = s.first_free = s.cap = nullptr;
    }
    return *this;
}

void MyStr::push_back(const std::string &s) {
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

void MyStr::chk_n_alloc() {
    if (size() == capacity()) {
        reallocate();
    }
}

void MyStr::free() {
    if (elements) {
        for (auto p = first_free; p != elements;) {
            alloc.destroy(--p);
        }
        alloc.deallocate(elements, capacity());
    }
}

std::pair<std::string *, std::string *> MyStr::alloc_n_copy(const std::string *b, const std::string *e) {
    auto new_data = alloc.allocate(e - b);
    return {new_data, std::uninitialized_copy(b, e, new_data)};
}

void MyStr::reallocate() {
    auto new_capacity = size() ? 2 * size() : 1;
    auto new_data = alloc.allocate(new_capacity);
    auto dest = new_data;
    auto elem = elements;
    for (size_t i = 0; i != size(); i++) {
        alloc.construct(dest++, std::move(*elem++));
    }
    free();
    elements = new_data;
    first_free = dest;
    cap = elements + new_capacity;
}