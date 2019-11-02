#include <string>
#include <utility>
#include <memory>

class MyStr {
public:
    MyStr() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    MyStr(const MyStr &);
    MyStr &operator=(const MyStr &);
    ~MyStr();
    MyStr(MyStr &&);
    MyStr &operator=(MyStr &&);
    void push_back(const std::string &);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }

private:
    static std::allocator<std::string> alloc;
    std::pair<std::string *, std::string *> alloc_n_copy(const std::string *, const std::string *);
    void free();
    void reallocate();
    void chk_n_alloc();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};