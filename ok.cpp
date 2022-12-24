#include <iostream>
using namespace std;
// template <class t>
class hello
{   protected:
    int a;
    int b;


public:
    hello(int s, int f)
    {
        a = s;
        b = f;
    }
int add()
    {
        return a + b;
    }
};
    // template <class t1>
    class protec : public hello{
       
        int c;
        int d;
    public:
        protec(int x,int y,int r, int f):hello(x,y)
        {
           
            c = r;
            d = f;
        }
        int multiply()
        {
            return a * b * c * d;
        }
    };
    int main()
    {

        return 0;
    }