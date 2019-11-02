#include <string>
#include <utility>
#include <memory>

class MyStr {
public:
    MyStr() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    MyStr(const MyStr &);
    MyStr &operator=(const MyStr &);
    ~MyStr();
    MyStr(const MyStr &&);
    MyStr &operator=(const MyStr &&);
    void push_back(std::string &);
    size_t size() { return first_free - elements; }
    size_t capacity() { return cap - elements; }
    std::string *begin() { return elements; }
    std::string *end() { return first_free; }

private:
    static std::allocator<std::string> alloc;
    std::pair<std::string *, std::string *> alloc_n_copy(std::string *, std::string *);
    void free();
    void reallocate();
    void chk_n_alloc();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};