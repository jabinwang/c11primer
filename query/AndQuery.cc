#include "AndQuery.hpp"
#include <memory>
#include <algorithm>

QueryResult AndQuery::eval(const TextQuery &tq) const {
    auto left = lhs.eval(tq);
    auto right = rhs.eval(tq);
    auto ret_lines = std::make_shared<std::set<line_no>>();
    std::set_intersection(left.begin(), left.end(), right.begin(), right.end(),
                          std::inserter((*ret_lines), ret_lines->begin()));
    return QueryResult(rep(), left.get_file(), ret_lines);
}