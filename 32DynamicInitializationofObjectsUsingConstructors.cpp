#include<iostream>
using namespace std;

class interest{
    int principal;
    int years;
    float interestrate ;
    int returnval;
    public:


    interest(){};                       //eak khali hamesha bnana pdega
    interest(int p,int y,float r);
    interest(int p,int y,int r);
    void show();
};

interest :: interest(int p,int y,float r){

        principal=p;
        years=y;
        interestrate=r;
        returnval=principal;

        for (int i = 0; i < y; i++)
        {
            returnval= returnval*(1+interestrate);
        }
        void show();
}

 interest :: interest(int p,int y,int r){

        principal=p;
        years=y;
        interestrate=float(r)/100;
        returnval=principal;

        for (int i = 0; i < y; i++)
        {
            returnval= returnval*(1+interestrate);
        }
        void show();
        
    }

    void interest::show(){
        cout<<"value of principal amount "<<principal<<" after "<<years<<" years is "<<returnval	<<endl;
    }

int main(){
interest c1,c2,c3;
    int p;
    int y;
    float r ;
    int R;

    cout<<"enter p ,y ,interestrate in decimals"	<<endl;
    cin>>p>>y>>r;
    c1=interest(p,y,r);
    c1.show(); 

    cout<<"enter p ,y ,interestrate in percentage"	<<endl;
    cin>>p>>y>>R;
    c2=interest(p,y,R);
    c2.show(); 

    
    return 0;
}