#ifndef __TEXTQUERY_H__
#define __TEXTQUERY_H__
#include <fstream>
#include <vector>
#include <string>
#include <memory>
#include <map>
#include <set>

using namespace std;

class QueryResult;
class TextQuery {
public:
    using line_no = vector<string>::size_type;
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<line_no>>> word_map;
};
#endif