#include<iostream>
using namespace std;
// template<class t>
// class h{
//     t data;
//     public:
//     h(t a){
//         data=a;
//     }
//     void display();
//     void intnumber();
// };
// template <class t>
// void h<t>::display(){          using member functions
//     cout<<data	<<endl;
// }

void func(int a){
    cout<<"m first "<<a	<<endl;

}

template<class t>
void func(t a){
    cout<<a	<<endl;
}

int main(){

    // h <int> obj(9);
    // obj.display();

    func(4);                                              //ambigous nature ki t ka ayega ya int vala,so preference int vale ko milegi
    
    return 0;
}