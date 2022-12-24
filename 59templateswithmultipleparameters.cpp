/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)
template<class T1, class T2 ....(COMMA SEPARATED)>
class nameOfClass{
// body
}
*/

#include<iostream>
using namespace std;


template<class t1,class t2>
class ok{
    public:
   t1 data1;
   t2 data2;

   ok(t1 a,t2 b){
    data1=a;
    data2=b;
   }

   void display(){
    cout<<this->data1<<"     "<<this->data2	<<endl;
   }



};
int main(){
    ok <int,char> obj(16,'e');
    obj.display();
    
    return 0;
}