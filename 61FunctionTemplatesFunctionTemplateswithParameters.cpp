#include <iostream>
using namespace std;
template <class t1, class t2>
float funcavg(t1 a, t2 b)
{
    float c = (a + b) / 2;
    return c;
}
template<class T>

void swapp(T &a,T &b){
          T temp=a;
          a=b;
          b=temp;
}


int main()
{
    float d;
    d = funcavg(9, 5.5);
    cout << d << endl;
    

    int x=5;
    int y=6;
    swapp(x,y);
    cout<<x<<endl<<y	<<endl;


    return 0;
}