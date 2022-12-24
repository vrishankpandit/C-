#include<iostream>
using namespace std;
int main()
{   //FOR LOOP
    for(int a=1;a<40;a++){                         //for(intialization,condition,updation)
        cout<<a<<endl;
    }                  
    

    //WHILE LOOP
    int b=1;
    while(b<=10){
        cout<<b<<endl;
        b++;
    }

    //DO-WHILE LOOP                           //diff b/w while and do-while is that do while eak baar execute ho jayega 
    int c=5;
    do
    {
        cout<<c<<endl;
    } while (false);
    

    return 0;
}
