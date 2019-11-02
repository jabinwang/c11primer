#include "QueryBase.hpp"

class WordQuery : public Querybase {
    friend class Query;

    WordQuery(const std::string &s) : query_word(s) {}
    QueryResult eval(const TextQuery &tq) const {
        return tq.query(query_word);
    }
    std::string rep() const {
        return query_word;
    }
    std::string query_word;
};