#include "QueryResult.hpp"

std::ostream &print(std::ostream &out, const QueryResult &qr) {
    out << "query word " << qr.mQueryWord << std::endl
        << "query result " << std::endl;
    for (auto linenum : (*qr.lines)) {
        out << "line number :" << linenum << " "
            << "valut:" << qr.file->at(linenum) << std::endl;
    }
    return out;
}