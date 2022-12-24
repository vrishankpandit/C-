#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    
    ofstream out;
    out.open("file.txt");
    string st="blah blah\n ";
    string st1="hehe";
    out<<st<<st1;
    out.close();

    ifstream in;
    in.open("file.txt");
    string s;
    // in>>s;

    // giving output the string lines by storing in st until the file reaches the end of it

    while(in.eof()==0){
        getline(in,s);
        cout<<s	<<endl;
    }
    // cout<<s<<endl;
    in.close();


    return 0;
}