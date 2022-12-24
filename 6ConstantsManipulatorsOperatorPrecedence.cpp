#include<iostream>
#include<iomanip>                         //for manipulators
using namespace std;
int main()
{   //CONSTANTS
    int a=6;
    cout<<a<<endl;
    a=7;
    cout<<a<<endl;
    //sirf upar vala ke output nikalne pe value changes,to not change the value we use constants

    //duplicate value krne pe error dega if we use constants
    // const int b=6;
    // cout<<b<<endl;
    // b=3;
    // cout<<b<<endl;
    int d=4,b=66,c=788;
    cout<<"value "<<d<<endl;
    cout<<"value "<<b<<endl;
    cout<<"value "<<c<<endl;
    cout<<"value "<<setw(4)<<d<<endl;                          //manipulators
    cout<<"value "<<setw(4)<<b<<endl;
    cout<<"value "<<setw(4)<<c<<endl;

    // Operator Precedence
    // int e = (a*5)+b;
    int e = ((((a*5)+b) -45)+87);            //bodmas nahi lagta,operator ki preference series hoti hai,and if preference same then associatative series hoti hai 
    cout << e;                                // jiski preference zada ,uske aaspaas bracket lagado    


    
    return 0;
}
