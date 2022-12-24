#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b=&a;


    // & ---> (Address of) Operator
    cout<<"address of a is "<<b<<endl;                  //b and &a will give the same address
    cout<<"address of a is "<<&a<<endl;

    // * ---> (value at) Dereference operator
    cout<<"the value of b "<<*b<<endl;

    // Pointer to pointer coz b ka bhi address hoga na vro
    int ** c = &b;
    cout <<"The address of b is "<<&b << endl;
    cout <<"The address of b is "<< c << endl;
    cout <<"The value at address c is "<<*c << endl;
    cout <<"The value at address value_at(value_at(c)) is "<< ** c << endl;

    return 0;
}