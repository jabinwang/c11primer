#ifndef QUERYBASE_H_
#define QUERYBASE_H_
#include <vector>
#include "TextQuery.hpp"
#include "QueryResult.hpp"

class Querybase {
    friend class Query;

protected:
    using line_no = TextQuery::line_no;
    virtual ~Querybase() = default;

public:
    virtual QueryResult eval(const TextQuery &) const = 0;
    virtual std::string rep() const = 0;
};
#endif