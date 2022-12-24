#include <iostream>
using namespace std;
class base
{
protected: // means can be inherited but will act as private
    int a;

private:
    int b;
};
/*
    For a protected member:
                             Public derivation               Private Derivation                  Protected Derivation
1.         Private members    Not Inherited                   Not Inherited                      Not Inherited
2.         Protected members  Protected()                        Private                             Protected
3.         Public members     Public                           Private                             Protected
*/
// protected means that agli class mein derive hojayega as a protected member,so agli class mein bhi privately behave krega and inherit ho jayega

class derived : protected base
{
};

int main()
{
    base b;
    derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}