#include<iostream>
     using namespace std;
     
     int main(){
        int *p=new int(40);
        cout<<*(p)	<<endl;

        int* arr=new int[3];
        arr[0]=0;
        arr[1]=1;
        arr[2]=2;
        arr[3]=3;
        arr[4]=4;        // can write like this also       *(arr+4)=5    
        *(arr+4)=5 ;   
        // delete[] arr;
        cout<<arr[0]	<<endl;
        cout<<arr[1]	<<endl;
        cout<<arr[2]	<<endl;
        cout<<arr[3]	<<endl;
        cout<<arr[4]	<<endl;

        return 0;
     }     