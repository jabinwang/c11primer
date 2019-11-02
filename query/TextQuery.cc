#include "TextQuery.hpp"
#include "QueryResult.hpp"
#include <sstream>
#include <iostream>

TextQuery::TextQuery(std::ifstream &inputSteam) : mFile(new std::vector<std::string>) {
    std::string line;
    while (std::getline(inputSteam, line)) {
        mFile->push_back(line);
        int index = mFile->size() - 1;
        std::istringstream line_word(line);
        std::string word;
        while (line_word >> word) {
            auto &linenos = mWordMap[word];
            if (!linenos) {
                linenos.reset(new std::set<line_no>);
            }
            linenos->insert(index);
        }
    }
}

QueryResult TextQuery::query(const std::string &word) const {
    auto result = mWordMap.find(word);
    static std::shared_ptr<std::set<line_no>> no_data(new std::set<line_no>);
    if (result == mWordMap.end()) {
        return QueryResult(word, mFile, no_data);
    } else {
        return QueryResult(word, mFile, result->second);
    }
}
