#include<iostream>
using namespace std;
typedef struct employee                                      //basically array hai but ismein different datatpes se value store ho skti hai
{
    /* data */                                         //typedef se struct employee likhne ki jagah sirf ep likh skte hai
    int age;
    char ok;
    float notok;
} ep;

union money                               //union only allows one variable to be stored in the allocated memory,eak hi datatype use hoga
{
    /* data */
    int rice;
    char okkkk;
    float salary;
};



int main(){
    //STRUCTURE
    struct employee me;                                     //use struct employee or ep
    ep me1; 
    me.age=12;
    me.ok='a';
    me1.age=13;
    me1.notok=78.9;
      

      //UNION
    union money hi;
    hi.rice=4;      // why hi.rice pe 103 value aari hai which is ascii value of g??
    hi.okkkk='g';   //Since union only allows one variable to be stored in the allocated memory.and we last updated value is "g".
                    // In this case it is "g", i know it is stored in rice, but okkk and rice and pound share same address .
                    // so when we called rice , the memory was accessed , but "g" was in memory and as we know rice was as int variable .so,the ascii value of "g" was shown.
    cout<<hi.rice	<<endl;
    cout<<hi.okkkk	<<endl;

    //ENUM
    enum meal{meal1,meal2,meal3};
    cout<<meal1	<<endl;
    cout<<meal2	<<endl;

    meal m1=meal3;
    cout<<  m1 	<<endl; 

     
    
    return 0;
}