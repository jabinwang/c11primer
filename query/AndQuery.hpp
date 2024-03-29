#include "BinaryQuery.hpp"
#include "Query.hpp"

class AndQuery : public BinaryQuery {
    friend Query operator&(const Query &, const Query &);
    AndQuery(const Query &left, const Query &right) : BinaryQuery(left, right, "&") {}
    QueryResult eval(const TextQuery &) const;
};

inline Query operator&(const Query &lhs, const Query &rhs) {
    return std::shared_ptr<Querybase>(new AndQuery(lhs, rhs));
}