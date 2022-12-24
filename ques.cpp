#include<iostream>
using namespace std;

int main(){
    // char ch;
    // cout<<"enter the value "	<<endl;
    // cin>>ch;

    // if(ch>='A'&&ch<='Z'){
    //     cout<<"uppercase "	<<endl;
    // }
    // else if (ch>='a'&& ch<='z'){
    //     cout<<"lowercase"	<<endl;

    // }
    // else if (ch>=0 && ch<=9){
    //     cout<<"numeric"	<<endl;
    // }

    int sum=0;
    
    int n;
    cout<<"enter n "	<<endl;
    cin>>n;

    int i=0;
    while(i<=n){
       sum=sum+i;
       i=i+2; 

    }
    cout<<sum	<<endl;
    

    return 0;
}