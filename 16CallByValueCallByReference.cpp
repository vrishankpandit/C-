#include<iostream>
using namespace std;

void swap(int a,int b){       //temp   a   b   
    int temp=a;               //4      4   7
    a=b;                      //4      7   7 
    b=temp;                          //4     7   4
}
//Swap using pointer reference
void swapointer(int *a,int *b){    
    int temp=*a;               
    *a=*b;                       
    *b=temp;

}
//Swap by C++ Refernce Variable cpp5

void swapreferencevar(int &c,int &d){
    int temp=c;               
    c=d;                      
    d=temp;  
}

int main(){
    int x=4;
    int y=7;

    swap(x,y);                  //values wont swap coz x and y thodi na change hue,swap ke local variable change hue hai ,main ke local variable change nahi hue hai,swap ke local variable ki new memory allot hue hai

    
    cout<<"x is "<<x<<" y is "<<y<<endl;

    swapointer(&x,&y);          // isse values isiliye swap hogyi kyuki iss baar address jaara hai jo ki same hoga,mtlb voh same memory ko access krega and new memory nahi bnegi

    cout<<"x is "<<x<<" y is "<<y	<<endl;      //is point pe abh x=7 and y=4

    swapreferencevar(x,y);                       //abh swap hojayegi again
    cout<<"x is "<<x<<" y is "<<y  <<endl; 
    return 0;
}