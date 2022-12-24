#include<iostream>
using namespace std;                 //arrays store value

int main(){
    int marks[]={43,54,65,87};
    cout<<marks[0]<<endl;
    marks[2]=455;
    cout<<marks[2]	<<endl;

    for (int i = 0; i < 2; i++)
    {
        cout<<"the value of "<<i<<" is "<<marks[i] <<endl;
    }
    int i=0;
    while (i<3)
    {
        cout<<"value of "<<i<<" is "	<<marks[i]<<endl;
        i++;
        
    }

    //pointers and arrays     address of marks contains the address of first value
    //  &marks is wrong
    int* p=marks;
    cout<<p	<<endl; 
    cout<<(p+1)	<<endl;
    cout<<"address of third term is "<<(p+2)	<<endl;    
    cout<<"the value of third term is "<<*(p+2)	<<endl;
    return 0;
}