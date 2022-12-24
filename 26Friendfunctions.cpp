#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex sumcomplex(complex c1, complex c2);         //for accessing

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << "the value of complex number is " << a << "+" << b << "i" << endl;
    }
};
// Below line means that non member - sumComplex funtion is allowed to do anything with my private members
complex sumcomplex(complex c1, complex c2)
{ // now this will give error as class ki private members are being accessed without permission,to give access friend function is used in class
    complex c3;
    c3.setdata((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    complex c, d, sum;
    c.setdata(1, 2);
    d.setdata(3, 4);
    c.display();
    d.display();

    sum = sumcomplex(c, d);
    sum.display();


    /* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/

    return 0;
}