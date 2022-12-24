#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    private:
    void checkbinaryornot(void);


    public:
    void read(void);
    void binarycomplement(void); 
    void display(void);                                          //by default private hota hai
};

void binary::read(void){
    cout<<"enter the string"	<<endl;
    cin>>s;
}

void binary::checkbinaryornot(void){
    
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s.at(i)!='1' && s.at(i)!='0')
        {
            cout<<"nahi hai vro"	<<endl;
            
            exit(0);
            
        }
       
        
        

    }    
        
    
    
}

void binary::binarycomplement(void){

    checkbinaryornot();
    
    for (int i = 0; i < s.length(); i++)
    {
    if (s.at(i)=='0')
    {
        s.at(i)='1';
    }
    else{
        s.at(i)='0';
    }    
    }
    
    
}

void binary::display(void){
    cout<<"displaying ur binary number"	<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}



int main(){
    binary b;
    b.read();
    // b.checkbinaryornot(); this will give error as this is private functions.user cant use
    b.display();
    b.binarycomplement();
    b.display();    

    
    return 0;
}