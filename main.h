
#pragma once
#include<string>
#include<vector>
using namespace std;
class Token{
    public:
    string toString();
};
class Scanner{
    public:
    Scanner(string& source) : source(source){}
    vector<Token> scantokens();
    private:
    string source;
};
void run(string& source);
void runFile(const string& path);
void runPrompt();