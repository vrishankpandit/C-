#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    int salary;
   
    employee(int a)
    {
        id = a;
        salary = 9;
    }
     employee(){};                  
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
class members/methods/etc ...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class

class program: public employee{
    public:
    
    int lang;
    program(int a){
            id=a;
            lang=4;
    }
                       //default constructor program ka add krna pdha i donno y agar employee ki privately inherit krte 
    void getdata(){
        cout<<id	<<endl;
    }
    
};
int main()
{
    employee haha;
    haha.id=6;          //as it is public so we can access
    program skill(0);
   // skill.id=7;       //isko ni kr skte as id is private in program
     skill.getdata();

    
    return 0;
}