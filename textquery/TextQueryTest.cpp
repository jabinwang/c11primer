#include "TextQuery.h"
#include "QueryResult.h"
#include <iostream>
#include <string>
#include <fstream>

void runQueries(ifstream &inFile) {
    TextQuery tq(inFile);
    while (true) {
        /* code */
        cout << "enter a word for query" << endl;

        string s;
        if (!(cin >> s) || s == "q")
            break;
        print(cout, tq.query(s));
    }
}

int main() {
    ifstream in("/home/jabin/programme/gitprojects/c11primer/textquery/test.txt");
    runQueries(in);
    return 0;
}
