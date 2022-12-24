#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
    void display()
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

int main()
{

    baseclass *baseclasspointer;
    baseclass objbase;
    derivedclass objderived;
    baseclasspointer = &objderived;      //pointing base class pointer to derived class object
    baseclasspointer->var_base = 3;
    baseclasspointer->display();       //pointer is of base class so even though acc to inheritance ,derived ka diplay run hona chahiye tha ,base ka hoga coz base ka pointer hai 
     // base_class_pointer->var_derived= 134;              // Will throw an error


    derivedclass *derivedclasspointer;
    derivedclasspointer=&objderived;
    derivedclasspointer->var_base=89;
    derivedclasspointer->var_derived=8;
    derivedclasspointer->display();         //here derived ka display aaya kyuki pointer is of derived class

                                              //but agar baseclass pointer se derived class ka display krna hai then virtual is used 
    return 0;
}