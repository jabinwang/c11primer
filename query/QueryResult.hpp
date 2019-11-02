#ifndef QUERYRESULT_H_
#define QUERYRESULT_H_
#include "TextQuery.hpp"
#include <iostream>

class QueryResult {
    friend std::ostream &print(std::ostream &, const QueryResult &);

public:
    QueryResult(std::string query_word,
                std::shared_ptr<std::vector<std::string>> infile,
                std::shared_ptr<std::set<TextQuery::line_no>> p) : mQueryWord(query_word),
                                                                   file(infile), lines(p) {}
    std::set<TextQuery::line_no>::iterator begin() {
        return lines->begin();
    }
    std::set<TextQuery::line_no>::iterator end() {
        return lines->end();
    }

    std::shared_ptr<std::vector<std::string>> get_file() {
        return file;
    }

private:
    std::string mQueryWord;
    std::shared_ptr<std::vector<std::string>> file;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
};
#endif