#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include"main.h"
using namespace std; 


void error(int line, string message){
    report(line, "", message);
}

void report(int line, string where, string message){
    cerr<<"[Line "<<line<<"]"<< where <<":"<<message;
    had_error = true;
}