#include "QueryBase.hpp"
#include "Query.hpp"

class NorQuery : public Querybase {
    friend Query operator~(const Query &);
    NorQuery(const Query &q) : query(q) {}
    QueryResult eval(const TextQuery &tq) const;
    std::string rep() const {
        return "~(" + query.rep() + ")";
    }
    Query query;
};
inline Query operator~(const Query &q) {
    return std::shared_ptr<Querybase>(new NorQuery(q));
}