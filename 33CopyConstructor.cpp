#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {}                     //DEFAULT ASSIGN KRNA PDEGA
    number(int num)
    {
        a = num;
    }
    void display()
    {
        cout << "the number is " << a << endl;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj)
    {
        cout << "copy instructor called " << endl;
        a = obj.a;
    }
};

int main()
{
    number x, y, z(45), z1;
    x.display();
    y.display();
    z.display();
    number z2(z);   // Copy constructor invoked
    z1.display();
    z1 = z;        // Copy constructor not called
    z1.display();

    number z3 = z;    // Copy constructor invoked
    z1.display();

    return 0;
}