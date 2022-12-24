#include<iostream>
using namespace std;

//need to declare complex as compiler wont know what complex is while compiling
//declaring complex
class complex;
class calculator{
    public:
    
    int sumofrealcomplex(complex , complex);          //    compiler wont know what complex is while compiling
    int sumofcomplexpart(complex , complex);          
    
   
};

class complex
{
    int a;
    int b;
    // Individually declaring functions as friends
    friend int calculator:: sumofrealcomplex(complex , complex);
    friend int calculator:: sumofcomplexpart(complex , complex);

     // Aliter: Declaring the entire calculator class as friend
    friend class calculator;
  

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << "the value of complex number is " << a << "+" << b << "i" << endl;
    }
};

int calculator::sumofrealcomplex(complex o1,complex o2){
             return(o1.a+o2.a);
}


int calculator::sumofcomplexpart(complex o1,complex o2){
             return(o1.b+o2.b);
}
int main(){
    complex o1,o2;
    o1.setdata(3,4);
    o2.setdata(5,6);
    calculator calc;
    int res=calc.sumofrealcomplex(o1,o2);
    cout<<"sum of real part of o1 and o2 is "<<res	<<endl;
    int res1=calc.sumofcomplexpart(o1,o2);
    cout<<"sum of complex part of o1 and o2 is "<<res1	<<endl;
    
    return 0;
}