#include<iostream>
using namespace std;

class A{
    private:
     int x=10;
    protected:
     int y=20;
    public:
     int z=30;

};

class B:private A{   //  here the mode is private 
    // X in in accessable
    // y is private
    // z is private

};

class C:protected A{  // here the mode is protected
  
  // x is in accessable
  // y is protected
  // z is protected

};

class D:public A{
    // x is accessable
    // y is protected
    // z is public

};

int main(){
    B b1;
    cout<<b1.x<<b1.y<<b1.z<<endl;

    C c1;
    cout<<c1.x<<c1.y<<c1.z<<endl;

    D d1;
    cout<<d1.x<<d1.y<<d1.z<<endl;
}