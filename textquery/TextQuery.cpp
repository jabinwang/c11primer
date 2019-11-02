#include "TextQuery.h"
#include "QueryResult.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

TextQuery::TextQuery(ifstream &inFile) : file(new vector<string>) {
    string text;
    while (getline(inFile, text)) {
        file->push_back(text);
        auto lineNo = file->size() - 1;
        istringstream line(text);
        string word;
        while (line >> word) {
            auto &lineno_set = word_map[word];
            if (!lineno_set) {
                lineno_set.reset(new set<line_no>);
            }
            lineno_set->insert(lineNo);
        }
    }
}

QueryResult TextQuery::query(const string &word) const {
    shared_ptr<set<line_no>> no_data(new set<line_no>);
    auto result = word_map.find(word);
    if (result == word_map.end()) {
        return QueryResult(word, no_data, file);
    } else {
        return QueryResult(word, result->second, file);
    }
}

ostream &print(ostream &out, const QueryResult &result) {
    out << "query word is " << result.sought << " \n";
    out << "find result is" << endl;
    for (auto no : *result.lineNoSet) {
        out << "occur line is " << no + 1 << " "
            << "current text is " << result.input->at(no) << endl;
    }
    return out;
}
