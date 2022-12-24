/* class-> object
/* template->class
so object ke liye class is a template,similarly class ki liye"template" is a template
why use template?
1 for example eak class bnayi vector for storing datatype,so alag datatype ki liye alag class bnani pdegi,like int ke liye ALAg ND FLOAT KE LIYE  alag,so dry principle is violated
*/


/*
SYNTAX FOR TEMPLATE
template<class T>          _!
class vector{               !
                            !
    T* arr;                 !
    public:                 !---        this represents many classes
    vector(T*arr){          !
        //code              !
    }                       !
}                          _!

T can be int ,float,char


int main(){

    vector<int>myvec(ptr);
    vector<float>fvec(ptr1);
}

*/



#include<iostream>
using namespace std;

//WITHOUT USING TEMPLATE          

// class vector{
//       public:
//       int *arr;
//       int size;
//       vector(int a){
//         size=a;
//         arr=new int[size];
//       }

//       int dotproduct(vector &v){
//         int d=0;
//         for (int i = 0; i < size; i++)
//         {
//                 d+= this->arr[i]*v.arr[i];
//         }
//         return d;
        
//       }

// };

// int main(){

//     vector v1(3);
//     v1.arr[0]=3;
//     v1.arr[1]=1;
//     v1.arr[2]=1;
    
//     vector v2(3);
//     v2.arr[0]=1;
//     v2.arr[1]=0;
//     v2.arr[2]=1;

//     int a=v1.dotproduct(v2);
//     cout<<a<<endl;
//     return 0;
// }

//TO USE TEMPLATE VAHA PE T DAALDO JAHA PE VARIABLE HO ANS 

template <class t>
class vector{
      public:
      t *arr;
      int size;
      vector(int a){
        size=a;
        arr=new t[size];
      }

      t dotproduct(vector &v){
        t d=0;
        for (int i = 0; i < size; i++)
        {
                d+= this->arr[i]*v.arr[i];
        }
        return d;
        
      }

};

int main(){

    vector <float>v1(3);
    v1.arr[0]=3;
    v1.arr[1]=1;
    v1.arr[2]=1;
    
    vector <float>v2(3);
    v2.arr[0]=1.1;
    v2.arr[1]=0.0;
    v2.arr[2]=1.9;

    float a=v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}