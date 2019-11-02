#ifndef BINARYQUERY_H_
#define BINARYQUERY_H_
#include "QueryBase.hpp"
#include "Query.hpp"

class BinaryQuery : public Querybase {
protected:
    BinaryQuery(const Query &l, const Query &r, const std::string &s) : lhs(l), rhs(r), opSym(s) {
    }
    std::string rep() const {
        return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")";
    }

    Query lhs, rhs;
    std::string opSym;
};
#endif