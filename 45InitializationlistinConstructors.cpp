#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class test{
    int a;
    int b;
    public:
    // test(int i,int j):a(i),b(j){}     WORKS
    // test(int i,int j):a(i),b(i+j){}     WORKS
    // test(int i,int j):a(i),b(2*j){}     WORKS
    // test(int i,int j):a(i),b(a+j){}     WORKS as a is initialixed first in private section
    // test(int i,int j):a(b+i),b(j){}     RED Flag this will create problems because a will be initialized first
    // Test(int i, int j) : b(j), a(i+b) -->RED Flag this will create problems because a will be initialized first
    
        test(int i,int j):a(b+i),b(j){                  //gives garbage value as a is initialixed first
            cout<<"constructor called "	<<endl;
            cout<<"a is "<<a	<<endl;
            cout<<"b is "<<b	<<endl;
        }




};

int main(){

    test t(4,6);
    
    return 0;
}