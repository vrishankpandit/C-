#include<iostream>
using namespace std;

class student{
    protected:
    int rollno;
    public:
    void set_rollno(int);
    void get_rollno(void);

};
void student::set_rollno(int r){
    rollno=r;
}

void student::get_rollno(){
    cout<<"roll no is "	<<endl;
}

class subject: public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);

};
void subject::set_marks(float b,float c){
          maths=b;
          physics=c;
}

void subject::get_marks(void){
    cout<<"maths marks are  is "<<maths	<<endl;
    cout<<" physics marks are is "<<physics<<endl;

}

class exam:public subject{
            public:
            float percentage;
            void display(){
                get_rollno();
                get_marks();
                cout<<"the percentage is "<<(maths+physics)/2	<<endl;
            }

};


int main(){

    /*
Notes:
If we are inheriting B from A and C from B: [ A --->B --->C ]
1. A is the base class for B and B is the base class for C
2. A -->B -->C is called Inheritance Path
*/

    exam harry;
    harry.set_rollno(420);
    harry.set_marks(94.0, 93.0);
    harry.display();
    return 0;
    
    
}