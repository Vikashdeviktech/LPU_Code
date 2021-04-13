#include<iostream>
using namespace std;

class A{                            // one parent and more than one child 
    public:
     int x=20,y=30;
};

class B:public A{
    public:
     void Sum(){
         cout<<x+y<<endl;
     }
};

class C:public A{

    public:
     void Mult(){
         cout<<x*y<<endl;
     }

};

int main(){
 
  B b1;
  C c1;

  b1.Sum();
  c1.Mult();



}