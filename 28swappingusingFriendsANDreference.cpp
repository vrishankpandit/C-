#include<iostream>
using namespace std;
class cd;
class ab
{
    int a;
    friend void exchange(ab &,cd &);

public:
    void setdata(int x)
    {
        a = x;
    }
    void display(void){
        cout<<a	<<endl;
    }


};

class cd
{
    int b;
    friend void exchange(ab &,cd &);

public:
    void setdata(int y)
    {
        b = y;
    }

     void display(void){
        cout<<b	<<endl;
    }

}; 

 
void exchange(ab &g,cd &h){
    int temp=g.a;
    g.a=h.b;
    h.b=temp;


};

int main(){
    ab e;
    cd f;
    e.setdata(4);
    f.setdata(5);
    exchange(e,f);

    cout<<"value of a after swapping is " ;
    e.display();
    cout<<"value of b after swapping is " ;
    f.display();
    return 0;
}