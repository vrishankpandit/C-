#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A& setdata(int a){              //if we use A& setdata,it will return object in main so we can use b.setdata().getdata()      this syntax directly as object will be returned
        this->a=a;
        return *this;                                   //if we use a=a,then a will get a garbage value
    }
    void getdata(){
        cout<<"a is "<<a	<<endl;
    }
};
int main(){

    // 'this' is a keyword which is a pointer which points to the object which invokes the member function
    A b;
    b.setdata(4).getdata();
    
    
    return 0;
}