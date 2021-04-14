#include<iostream>
using namespace std;

class A{
    public:
     void Show(){
         cout<<"I am a parent class";
     }
};

class B:public A{


};

class C:public A{


};


class D:public B,public C{

} ;

int main(){
    D c1;
    c1.C::Show();  // resolved using scope resolution

    c1.B::Show();// resolved using scope resolution
}