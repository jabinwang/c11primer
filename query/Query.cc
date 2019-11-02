#include "Query.hpp"
#include <iostream>

std::ostream &
operator<<(std::ostream &os, const Query &query) {
    os << query.rep() << std::endl;
    return os;
}