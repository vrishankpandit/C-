//in ko le aao st2 mein




#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C ++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase


// In order work with files in C ++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
*/

int main(){

    string st="ok";
    string st1;
    // // Opening files using constructor and writing it
    // ofstream out("samplefile.txt");   //write operation           isse dusri file mein likh skte hai kuch bhi
    // out<<st;
    
    ifstream in("samplefile1.txt");
    // Opening files using constructor and reading it
    in>>st1;          // Read operation               //dusri file se leke string mein convert krke cout se output 

    getline(in,st1);
    // getline(in,st1);

    cout<<st1	<<endl;
    
    return 0;
}