#include<iostream>
using namespace std;

class shop{
    int item;
    float price;
    public:
    void setdata(int c,float d){
           item=c;
           price=d;
    }
    void getdata (){
            cout<<"item no is "<<item	<<endl;
            cout<<"price is "<<price	<<endl;
    }
};


int main(){
    int size=2;
    shop* ptr=new shop[size];
    shop* ptritem=ptr;
    int p,i;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter item no "<<i+1	<<endl;
        cin>>p;
        cout<<"enter price "<<endl;
        cin>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        // (*ptr).getdata()
        ptritem->getdata();
        ptritem++;
    }
            
    return 0;
}