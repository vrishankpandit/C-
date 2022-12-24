#include<iostream>
using namespace std;

// C ++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
// - members are public
// - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classses --> can make few members as private & few as public
// structures in C ++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
// Class definition
} harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private
// Nesting of member functions

class employee{                              //structure not used as structure may data hide nahi kr skte and functions bhi use nahi kr skte
    private:
    int a,b,c;
    public:
    int d,e;

    void setdata(int x,int y,int z);              //declare krdia ki baad mein ayega
    void getdata(){
        cout<<"the value of a is "<<a	<<endl;
        cout<<"the value of b is "<<b	<<endl;
        cout<<"the value of c is "<<c	<<endl;
        cout<<"the value of d is "<<d	<<endl;
        cout<<"the value of e is "<<e	<<endl;
    }
};

void employee :: setdata(int x,int y,int z){
    a=x;
    b=y;
    c=z;

}

int main(){
    employee harry;
    //harry.a will throw error as a is private
    harry.d=5;
    harry.e=6;
    harry.setdata(1,2,3);
    harry.getdata();

    
    return 0;
}