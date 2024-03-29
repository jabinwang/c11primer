#ifndef QUERY_H_
#define QUERY_H_
#include "QueryResult.hpp"
#include "QueryBase.hpp"
#include "WordQuery.hpp"

#include <string>

class Query {
    friend Query operator~(const Query &);
    friend Query operator|(const Query &, const Query &);
    friend Query operator&(const Query &, const Query &);

public:
    Query(const std::string &);
    QueryResult eval(const TextQuery &tq) const {
        return q->eval(tq);
    }
    std::string rep() const {
        return q->rep();
    }

private:
    Query(std::shared_ptr<Querybase> query) : q(query) {}
    std::shared_ptr<Querybase> q;
};
inline Query::Query(const std::string &s) : q(new WordQuery(s)) {
}
std::ostream &
operator<<(std::ostream &os, const Query &query);
#endif