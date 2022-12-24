#include<iostream>
using namespace std;
int factorial(int b){
    if(b<=1){
        return 1;
    }
       return b*factorial(b-1);
}

int fib(int a){
    if(a<2){
        return 1;
    }
    return fib(a-2)+fib(a-1);
    
}


int main(){
    int a;
    cout<<"enter a "	<<endl;
    cin>>a;

    cout<<"factorial of "<<a <<" is "<<factorial(a)<<endl;

    int n;
    cout<<"enter value of nth term"	<<endl;
    cin>>n;   
    cout<<"term in fibonacci sequence at position "<<n<<" is "<<fib(n)	<<endl;
 
    
    return 0;
}