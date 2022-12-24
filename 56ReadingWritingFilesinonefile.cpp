#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main()
{

    // connecting our file with hout stream
    ofstream ht("sample.txt");

    // creating a name string variable and filling it with string entered by the user
    string st;
    cout << "enter the name\n"
         << endl;
    cin >> st;

    // writing a string to the file
    ht << st + " okie ";
    // disconnecting our file
    ht.close();
    // connecting our file with hin stream
    ifstream oh("sample.txt");

    // creating a content string variable and filling it with string present there in the text file
    string s;

    oh >> s;
    getline(oh, s);
    // disconnecting our file
    oh.close();
    cout << "content of this file is:" << s << endl;

    return 0;
}