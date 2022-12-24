#include<iostream>
using namespace std;
class complex{
    int a;
    int b;

    public:
    void setdata(int x,int y){
        a=x;
        b=y;

    }
    void setdatabysum(complex o1,complex o2){             //complex is for complex number
        a=o1.a+o2.a;
        b=o1.b+o2.b;
        
    }
    void display(void){
        cout<<"the value of complex number is "<<a<<"+"<<b<<"i"	<<endl;
    }

    void display1(void){
        cout<<"the value of complex number formed by adding first and second is "<<a<<"+"<<b<<"i"	<<endl;
    }
    
};


int main(){
    complex first,second,third;
    first.setdata(2,3);
    first.display();

    second.setdata(4,5);
    second.display();

    third.setdatabysum(first,second);
    third.display1();


    
    return 0;
}