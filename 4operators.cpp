// There are two types of header files:

// 1. System header files: It comes with the compiler

#include<iostream>

// 2. User defined header files: It is written by the programmer

// #include "this.h"  --> This will produce an error if this.h is not present in the current directory
using namespace std;
int main()
{   int a=4,b=6;
    cout<<"sup bitches\n"<<endl;
//Arithmetic operators            =,-=/,*,% toh aate hi hai
    cout<<"Arithmetic operators "<<endl;
    cout<<"the value of a++ is "<<(a++)<<endl;  //a ki value print krdo and a ki value mein 1 add krdo a print hone ke baad,so 4 print krke abh a ki value 5 hogyi
    cout<<"the value of a-- is "<<(a--)<<endl;  //a ki value print krke 1 minus krdo,so abh 5 print krke a ki value 4 hogyi
    cout<<"the value of ++a is "<<(++a)<<endl;  //abh a mein 1 add krke a ki value print krro ,so 4+1 =5,so 5 print hoga
    cout<<"the value of --a is "<<(--a)<<endl;  
    cout<<endl;
// comparison operators ,==,!=,<=,>=,<,> yeh bhi aate hai
// logical operator and,or
cout<<"LOGICAL OPERATORS"<<endl;
cout<<"the value of (a==b) and (a<b) is "<<((a==b) && (a<b))<<endl;
cout<<"the value of (a==b) or (a<b) is "<<((a==b) || (a<b))<<endl;
cout<<"the value of logical not operator  !(a<b) is "<<(!(a<b))<<endl;
   
    
    return 0;
}


