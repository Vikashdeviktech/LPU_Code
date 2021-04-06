#include<iostream>
#include<string>
using namespace std;

class A{
    public:
     int wheel=6;
};

class B{
    public:
     int seat=10;

};

class C:public A,public B{

};

int main(){
    C objc;
    cout<<objc.wheel<<" "<<objc.seat;
}


