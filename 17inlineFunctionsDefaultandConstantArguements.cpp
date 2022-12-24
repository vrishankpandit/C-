#include<iostream>
using namespace std;

inline int product(int a,int b){
    // Not recommended to use below lines with inline functions
// static int c=0; // This executes only once
// c = c + 1; // Next time this function is run, the value of c will be retained
//inline function means the function instead of repeated the whole procedure function will copied in the statement and directly compiled which will save the time in compilation
    int c=a*b;
    return c;

}

float moneyReceived(int currentMoney, float factor=1.04){     //1.04 is a default arguement here ,if value is not specified then 1.04 will be used
    return currentMoney * factor;
}

int main(){
    int x,y;
    cout<<"value of x and y is" 	<<endl;
    cin>>x>>y;
    cout<<"product is"<<product(x,y)	<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";


    
    return 0;
}