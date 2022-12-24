#include<iostream>
using namespace std;
class h{
    int id;
    public:
    void setdata(void)
    {

        cout << "enter the id" << endl;
        cin >> id;
        
    }
    void getdata(void)
    {
        cout << "the id is" << id << endl; 
    }
};

int main(){
    h fb[4];
    for (int i = 0; i < 4; i++)
    {
       fb[i].setdata();
       fb[i].getdata();            
    }
    
    
    return 0;
}