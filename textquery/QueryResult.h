class QueryResult {
    friend ostream &print(ostream &, const QueryResult &);

public:
    QueryResult(const string word, shared_ptr<set<TextQuery::line_no>> ls,
                shared_ptr<vector<string>> f) : sought(word), lineNoSet(ls), input(f) {}

private:
    string sought;
    shared_ptr<set<TextQuery::line_no>> lineNoSet;
    shared_ptr<vector<string>> input;
};
