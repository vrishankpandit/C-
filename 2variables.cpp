#include<iostream>
using namespace std;
int c=6;                //this is a global variable
void sum(){
    int a=7;           //code main se hi shuru hota hai
    cout<<c;           //in output c ki value global vali li kyuki local nahin tha
}                     

int main(){
    int a=8;              //this is local variable as it is inside a functions,preference is given to local first
    int c=8; 
    float b=9.9;
    char m='g';
    sum();
    cout<<".\nyo.\n the value of a is "<<a<<".\n change line lmao "<<endl ;   // \n se line change
    cout<<"the value of global variable is "<<::c;                            //global variable summon krne ke liye :: use kia
    return 0;
}