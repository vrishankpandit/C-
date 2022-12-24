#include <iostream>
#include <cmath>;
using namespace std;

class complex
{
    int x, y;
    

    friend float distance(complex, complex );
    

public:
    
    complex(int ,int ); // Constructor declaration

    void printNumber(void)
    {
        cout << "the points are ( " << x << " , " << y << ")" << endl;
    }
};

 float  distance(complex o1,complex o2){

          

     cout<<"distance is "<< sqrt(pow(o1.x - o2.x, 2) + pow(o1.y - o2.y, 2) * 1.0);

 }      

complex ::complex(int a,int b) // ----> This is a parametrized constructor as it takes 2 parameters
{
    x = a;
    y=b;
    // cout<<"Hello world";  //ye bhi print hojayega
}


int main(){
    //implicit call 
    complex a(4,6);
    a.printNumber();

    //explicit call
    complex b= complex(5,7);
    b.printNumber();

    float distance1=distance(a,b);
    return 0;
}
