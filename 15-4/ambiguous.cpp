#include<iostream>
using namespace std;

class A{
    public:

    void show(){
        cout<<"Hello world";
    }
};

class B:public A{

};
class C:public A{

};

class D:public B,public C{

};

int main(){

  D d1;
  d1.C::show();   // we can resolve it by using scope resolution   
  d1.B::show();   



}
