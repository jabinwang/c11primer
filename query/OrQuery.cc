#include "OrQuery.hpp"

QueryResult OrQuery::eval(const TextQuery &tq) const {
    auto right = rhs.eval(tq);
    auto left = lhs.eval(tq);
    auto ret_lines = std::make_shared<std::set<line_no>>(left.begin(), left.end());
    ret_lines->insert(right.begin(), right.end());
    return QueryResult(rep(), left.get_file(), ret_lines);
}