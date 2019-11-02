#include "NorQuery.hpp"

QueryResult NorQuery::eval(const TextQuery &tq) const {
    auto result = query.eval(tq);
    auto ret_lines = std::make_shared<std::set<line_no>>();
    auto beg = result.begin();
    auto end = result.end();
    auto sz = result.get_file()->size();
    for (size_t n = 0; n < sz; n++) {
        if (beg == end || *beg != n) {
            ret_lines->insert(n);
        } else if (beg != end) {
            beg++;
        }
    }
    return QueryResult(rep(), result.get_file(), ret_lines);
}