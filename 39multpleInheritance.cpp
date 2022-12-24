#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};
// Syntax for inheriting in multiple inheritance
// class Derived C: visibility-mode basel, visibility-mode base2
// {
// Class body of class "Derivedc"
// };

class derived : public base1, public base2, public base3
{
public:
    void display()
    {
        cout << "first number is" << base1int << endl;
        cout << "second number is" << base2int << endl;
        cout << "third number is" << base3int << endl;
        cout << "sum is " << base1int + base2int + base3int << endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
baselint --> protected
base2int --> protected
Member functions:
set_baselint() --> public
set_base2int() --> public
set_baselint() --> public
*/

int main()
{
    derived harry;
    harry.set_base1int(5);
    harry.set_base2int(25);
    harry.set_base3int(50);
    harry.display();

    return 0;
}