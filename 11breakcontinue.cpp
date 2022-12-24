#include<iostream>
using namespace std;

int main(){
    for ( int i = 0; i < 5; i++)
    {
      
      if (i==1)
      {
        continue;
      }

      cout<<i<<endl;                                     //continue mein voh vala number hatt jayega
                                                         //break mein loop ke bahar chale jayega 
      if (i==3)
      {
        break;
      }
      
    }
    
    return 0;
}