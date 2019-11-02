#include "BinaryQuery.hpp"

class OrQuery : public BinaryQuery {
    friend Query operator|(const Query &, const Query &);
    OrQuery(const Query &l, const Query &r) : BinaryQuery(l, r, "|") {
    }
    QueryResult eval(const TextQuery &) const;
};

inline Query operator|(const Query &l, const Query &r) {
    return std::shared_ptr<Querybase>(new OrQuery(l, r));
}
