#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); // --> Acceptable
// int sum(int a, b) ; // --> Not Acceptable
// int sum(int, int); // --> Acceptable


int sum(int a, int b);       //this is function prototype ,so main identifies sum as sum is after the main function 
void g();
int main(){
    int a, b;
    cout<<"a is "	<<endl;
    cin>>a;
    cout<<"b is "	<<endl;
    cin>>b;

    //a and b are actual parameters

    cout<<"the sum is "<<sum(a,b)	<<endl;             //sum(a,b) ki jagah c aajayega
    g();

   
    return 0;
}

// formal parameters num1 and num2 will be taking value from actual parameters a and b 

 int sum(int num1,int num2)
    { 
        int c=num1+num2;
        return c;
    }

void g(){
        cout<<"\n hello hi "	<<endl;
        
        }
