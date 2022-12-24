#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
1. SimpleCalculator- Takes input of 2 numbers using a utility function and perfoms +, -, *, / and
displays the results using another function.
2. Scientific Calculator - Takes input of 2 numbers using a utility function and perfoms any four
scientific operation of your chioice and displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of Inheritance are you using?
Q2. Which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?
*/
//EASY HAI HOJAYEGA 

class simplecalc
{
protected:
    float a;
    float b;
    int c;

public:
    void set1int()
    {
        int x;
        cout << "enter first number" << endl;
        cin >> x;
        a = float(x);
    }
    void set2int()
    {
        int x;
        cout << "enter second  number" << endl;
        cin >> x;
        b = float(x);
    }

    void operation(){
        cout<<"operation list"	<<endl;
        cout<<"1 for +"	<<endl;
        cout<<"2 for /"	<<endl;
        cout<<"3 for -"	<<endl;
        cout<<"4 for *"	<<endl;
    }

    void function()
    {
        int x;
        cout << "enter the operation number which u want to use " << endl;
        cin >> x;
        c = x;
        if (c = 1)
        {
            cout << "sum is " << a + b << endl;
        }
        else if (c =2 )
        {
            cout << "division is " << a / b << endl;
        }
        else if (c =3 )
        {
            cout << "subtraction is " << a - b << endl;
        }
        else
        {
            cout << "multiplication is " << a * b << endl;
        }
    }
};

class scientificcalc
{
protected:
    float a;
    float b;
    int c;

public:
    void set1int()
    {
        int x;
        cout << "enter first number" << endl;
        cin >> x;
        a = float(x);
    }
    void set2int()
    {
        int x;
        cout << "enter second  number" << endl;
        cin >> x;
        b = float(x);
    }

    void operation1(){
        cout<<"operation list"	<<endl;
        cout<<"5 for square root of first number"	<<endl;
        cout<<"6 for square root of second number"	<<endl;
        cout<<"7 for cosine of first number "	<<endl;
        cout<<"8 for cosine of second number"	<<endl;
    }

    void function()
    {
        int x;
        cout << "enter the operation number which u want to use " << endl;
        cin >> x;
        c = x;
        if (c = 5)
        {
            cout << "square root of first number is " << sqrt(a) << endl;
        }
        else if (c =6 )
        {
            cout << " square root of second number" << sqrt(b) << endl;
        }
        else if (c =7 )
        {
            cout << "cosine of first number " << cos(a) << endl;
        }
        else
        {
            cout << "cosine of second number " << cos(b) << endl;
        }
    }
};

class hybrid:public simplecalc,public scientificcalc{
                     
} ;
int main()
{
    simplecalc abc;
    abc.set1int();
    abc.set2int();
    abc.operation();
    cout<<endl;
    abc.function();

    return 0;
}