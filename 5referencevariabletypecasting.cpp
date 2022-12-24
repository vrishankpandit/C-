#include<iostream>
using namespace std;
int main()
{
    cout<<"float,long double"<<endl;
    float a=34.4;
    long double b=34.4;                  //generally 34.4 long double consider hoga float nahi unless usse 34.4f or 34.4F se specify na krre
    cout<<"the size  of a is "<< sizeof(34.4f)<<endl;
    cout<<"the size  of a is "<< sizeof(34.4l)<<endl;
    cout<<"the size  of b is "<< sizeof(34.4F)<<endl;
    cout<<"the size  of b is "<< sizeof(34.4L)<<endl;
    cout<<endl;


    cout<<"reference variable"<<endl;
    int c=5;
    int &d=c;
    cout<<c<<endl;  
    cout<<d<<endl; 
    cout<<endl;

    cout<<"typecasting"<<endl;
    float e=34.65;
    cout<<int(e)<<endl;  
    cout<<(int)e<<endl;           //int(e),or (int)e      same thing
    cout<<c+int(e)<<endl;
    return 0;
}
