#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // default value is 0
                      // static hata ki //int count=0 try krke see the difference and static void bhi comment out krna pdega
public:
    void setdata(void)
    {

        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id is" << id << "and this employee number is" << count << endl; // Count is the static data member of class Employee
    }
    static void getcount(void)
    {
        // cout<<id; // throws an error                             //static data member function
        cout << " count is " << count << endl; // static data member cannot acces nonstatic data member
    }
} a, b, c;
int employee::count; //   int employee::count=1000 if u want to set value ,u cant set static value in the class

int main()
{

    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    a.setdata(); // static count previous object ki count value use krega,but agar voh static nahi hota toh hamme usse 0 specify krna pdhta and fir voh hamesha 0 aata
    a.getdata();
    employee::getcount(); // to access function without using object name

    b.setdata();
    b.getdata();
    employee::getcount();

    c.setdata();
    c.getdata();
    employee::getcount();
    return 0;
}