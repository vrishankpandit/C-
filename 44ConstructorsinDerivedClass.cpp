#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
// Order of execution of constructor -> first A() then B ()
};
Case2:
class A: public B, public C{
// Order of execution of constructor -> B() then C () and A()
};
Case3:
class A: public B, virtual public C{
// Order of execution of constructor -> C () then B () and A()
};
*/

class base1{
    int x;
    public:
    base1(int a){
        x=a;
        cout<<"base 1 constructor called "	<<endl;

    }
    void printbase1(void){
        cout<<"x is "<<x	<<endl;
    }
};


class base2{
    int y;
    public:
    base2(int a){
        y=a;
        cout<<"base 2 constructor called "	<<endl;

    }
    void printbase2(void){
        cout<<"y is "<<y	<<endl;
    }
};

class derived:public base1, public base2{
         int z;
         int c;
         public:
         derived(int a, int b,int e, int d):base1(a),base2(b){
            z=e;
            c=d;
            cout<<"derived constructor called"	<<endl;
         }
         
    void printderived(void){
        cout<<"z is "<<z	<<endl;
        cout<<"c is "<<c	<<endl;
    }
};
int main(){
    derived harry(1,2,3,4);
    harry.printbase1();
    harry.printbase2();
    harry.printderived();

    
    
    return 0;
}