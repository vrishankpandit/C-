#include<iostream>
using namespace std;

//but agar baseclass pointer se derived class ka display krna hai then virtual is used 
// function ke piche virtual laga do toh voh function run ni hoga

class baseclass
{
public:
    int var_base;
    virtual void display()       //here
    {
        cout << "var base is " << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "var base is " << var_base << endl;
        cout << "var derived is " << var_derived << endl;
    }
};

int main(){

    baseclass* bptr;
    baseclass obj;
    derivedclass obj2;
    bptr=&obj2;
    bptr->display();

    
    return 0;
}