#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std; 


class Token{
    public:
    string toString()
    {
        return "token()";
    }
};

class Scanner{
    Scanner(string& source) : source(source){}

    vector<Token> scantokens(){


    }
};

void run(string& source){
    Scanner scanner(source);
    vector<Token> token = scanner.scantokens();
    for(token& token:tokens)
    {
        cout<<token.toString()<<endl;
    }
    if(had_error){
        exit(65);
    }

}

void runFile(const string& path){
    ifstream file(path, ios::in | ios::binary);
    stringstream buffer;
    buffer << file.rdbuf();
    string filecontent = buffer.str()
    run(filecontent);

}
void runPrompt(){
    string line;
    while(true){
        cout<<"> ";
        if(!getline(cin, line))
       {
        break;
       } 
       run(line);
       had_error = false;
    }
}

int main(int argc,char* argv[] ){
   if(argc>2){
    cout<<"Usage journey [script]"<<endl;
    return 64;
   }
   else if(argc ==2)
   {
    runFile(argv[1]);
   }
   else{
    runPrompt();
   }


}
