#include<iostream>
using namespace std;
template<class t1=int,class t2=float,class t3=char>
class ok{
    public:
      t1 a;
      t2 b;
      t3 c;
    ok (t1 x,t2 y,t3 z){
        a=x;
        b=y;
        c=z;
    }

    void display(){
        cout<<a	<<endl;
        cout<<b	<<endl;
        cout<<c<<endl;
    }
};
int main(){

    ok <> har(2,2.3,'a');
    har.display(); 
     ok<float,float,float> hehe(2.3,4.5,6.7);    //   here default doesnt work
     hehe.display();
    return 0;
}