#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;                     //idhar bhi so derived class kaunse use kregi
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;              //idhar bhi greet
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){                              
        Base2 :: greet();                               //to specify kaunsa use ho,yeh vali kregi
    }
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method,no scope resolution to slove ambiguity
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};



int main(){

    
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;                               //kaunsa greet use hoga
     d.greet();

//  // Ambibuity 2
//     B b;
//     b.say();

//     D d;
//     d.say();

    return 0;
    
}