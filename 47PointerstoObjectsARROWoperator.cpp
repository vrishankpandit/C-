#include<iostream>
using namespace std;
      class complex{
        int real,imaginary;
        public:
        void setdata(int a,int b){
            real=a;
            imaginary=b;
        }

        void getdata(){
           cout<<"real is "<<real	<<endl;
           cout<<"imaginary is "<<imaginary	<<endl;

        }
      };
int main(){

    complex c1;
    // complex *ptr=&c1;

    // -> means ptr ko deference kro and function use kro

    complex *ptr1=new complex[4];       //4 new arrays
    // (*ptr1).setdata(4,5); is exactly same as
    ptr1->setdata(4,5);
    // (*ptr1).getdata(); is exactly same as
    ptr1->getdata();
    
    return 0;
}