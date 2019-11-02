#ifndef TEXTQUERY_H_
#define TEXTQUERY_H_
#include <string>
#include <vector>
#include <map>
#include <set>
#include <memory>
#include <fstream>

class QueryResult;

class TextQuery {

public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;

private:
    std::shared_ptr<std::vector<std::string>> mFile;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> mWordMap;
};

// std::ostream &print(std::ostream &out, const QueryResult &qr) {
//     out << "query word" << qr.mQueryWord << std::endl
//         << "query result " << std::endl;
//     for (auto linenum : (*qr.lines)) {
//         out << "line number :" << linenum << " "
//             << "valut:" << qr.file->at(linenum) << std::endl;
//     }
//     return out;
// }
#endif