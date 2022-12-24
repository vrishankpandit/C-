#include <iostream>
using namespace std;

class base
{
    int a;               // private by default and is not inheritable

public:
    int b;
    void setdata();
    int getdata1();
    int getdata2();
};
class derived : public base                   //if privately inherited then setdata in main wont be accessible,b in return b bhi nahi accessible hota
{
    int c;

public:
    void process();
    void display();
};

void base::setdata(void)
{
    a = 10;
    b = 20;
}

int base::getdata1(void)
{
    return a;
}

int base::getdata2(void)
{
    return b;
}

void derived ::process()
{
    c = b * getdata1();             //b private hota toh getdata2()use krna pdhta
}
void derived ::display()
{
    cout<<"the value of a is"	<<getdata1()<<endl;          //cant write a as inaccessible
    cout<<"the value of b is"	<<b<<endl;
    cout<<"the value of c is"	<<c<<endl;
}
int main()
{   derived der;
    der.setdata();
    der.process();
    der.display();


    return 0;
}