#include <iostream>
using namespace std;
//IF B IS DERIVED FROM A ,AND C IS ALSO DERIVED FROM A,AND D IS DERIVED FROM BOTH B AND C THEN TO PREVENT AMBIGOUS NATURE OF A(MTLB A 2 BAAR NA AA JAYE,VIRTUAL IS USED)
class student
{
protected:
    int rollno;

public:
    void set_rollno(int a)
    {
        rollno = a;
    }
    void print_rollno(void)
    {
        cout << "YOU ROLL NO IS " << rollno << endl;
    }
};

class marks : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "YOUR MARKS IN MATHS ARE " << maths << endl;
        cout << "YOUR MARKS IN PHYSICS ARE " << physics << endl;
    }
};

class score : virtual public student
{
protected:
    float score;

public:
    void set_score(float m2)
    {
        score = m2;
    }
    void print_score(void)
    {
        cout << "YOUR SCORE IS" << score << endl;
    }
};

class result : public score, public marks
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_rollno();
        print_marks();
        print_score();
        cout << "YOUR TOTAL SCORE IS " << total << endl;
    }
};

int main()
{
    result a;
    a.set_rollno(42);
    a.set_marks(88, 98.9);
    a.set_score(8);
    a.display();

    return 0;
}