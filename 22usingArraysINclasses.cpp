#include<iostream>
using namespace std;

class hehe{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
    void initcounter(){counter=0;};
    void setprice(void);
    void display(void);


};

void hehe::setprice(void){
    cout<<"enter the id of item no"<<counter+1	<<endl;
    cin>>itemid[counter];
    cout<<"enter price "	<<endl;
    cin>>itemprice[counter];
    counter++;


}

void hehe::display(void){

    for (int i = 0; i < counter; i++)
    {
        cout<<"the price is "<<itemprice[i]<< "and id is "<<itemid[i]	<<endl;
    }
    
}
int main(){
    hehe object1;
    object1.initcounter();
    object1.setprice();
    object1.setprice();
    object1.display();
    
    return 0;
}