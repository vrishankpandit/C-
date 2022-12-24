#include <iostream>
using namespace std;
//abstract classes means that the only motive of that class is to be derived

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
    virtual void display()=0;  //this is pure virtual class,=0 is only put to specify that u have to make a display function in the derived classes
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


