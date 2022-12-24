#include<iostream>
using namespace std;

class complex{
     int a,b;
     public:
     complex(){  //u can put default valuess also as //complex(int a=3,int b=4){}
        a=0;
        b=0;
     }
     complex(int x,int y){
        a=x;
        b=y;
     }
     complex(int x){
        a=x;
        b=0;
     }

     
    void printNumber(void)
    {
        cout << "the points are ( " << a<< " , " << b << ")" << endl;
    }
};

int main(){
    complex m(2,3);
    complex p(2);                //parametrized constructor
    complex n;               //default constructor

    m.printNumber();
    p.printNumber();
    n.printNumber();
    return 0;
}