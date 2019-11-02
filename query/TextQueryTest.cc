#include "TextQuery.hpp"
#include "QueryResult.hpp"
#include <iostream>

//query
void runQuery(std::ifstream &input_file) {
    TextQuery tq(input_file);
    while (true) {
        std::cout << "enter a word to query" << std::endl;
        std::string word;
        if (!(std::cin >> word) || word == "q")
            break;
        print(std::cout, tq.query(word));
    }
}
int main() {

    std::ifstream input("/home/jabin/programme/gitprojects/c11primer/query/test.txt");

    runQuery(input);
    return 0;
}