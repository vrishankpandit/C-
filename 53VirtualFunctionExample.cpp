#include <iostream>
using namespace std;

class cwh
{
protected:
    float rating;
    string title;

public:
    cwh(string s, float f)
    {
        title = s;
        rating = f;
    };
    virtual void display(){};
};

class cwhvideo : public cwh
{
    float videolength;

public:
    cwhvideo(string s, float f, float v) : cwh(s, f)
    {
        videolength = v;
    };
    void display()
    {
        cout << "rating is " << rating << endl;
        cout << "title  is " << title << endl;
        cout << "videolength is " << videolength << endl;
    }
};

class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float f, int v) : cwh(s, f)
    {
        words = v;
    };
    void display()
    {
        cout << "rating is " << rating << endl;
        cout << "title  is " << title << endl;
        cout << "words is " << words << endl;
    }
};

int main()
{

    string title;
    float rating;
    int words;
    float videolength;

    title = "django";
    rating = 0.9;
    words = 455;
    cwhtext obj(title, rating, words);
    obj.display();
    return 0;

cwh* tuts[2];
tuts[0]=&obj;
tuts[0]->display();
}





// Rules for virtual functions
// 1. They cannot be static
//-2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it
// in the derived class