#include "Query.hpp"
#include "QueryBase.hpp"
#include "QueryResult.hpp"
#include "OrQuery.hpp"
#include "AndQuery.hpp"
#include "NorQuery.hpp"
#include "TextQuery.hpp"
#include "BinaryQuery.hpp"

#include <fstream>
#include <iostream>

int main() {
    std::ifstream input("/home/jabin/programme/gitprojects/c11primer/query/test.txt");
    TextQuery tq(input);

    Query q = Query("fiery") & Query("bird") | Query("wind");
    // Query q = Query("tell") & Query("her");
    std::cout << q << std::endl;
    print(std::cout, q.eval(tq));

    return 0;
}