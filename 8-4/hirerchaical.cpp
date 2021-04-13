#include<iostream>
using namespace std;

class A{
    public:
     int a=10,b=20;
};

class B:public A{
    public:
     void Sum(){
         cout<<a+b<<endl;
     }
};

class C:public A{
    public:
     void Prod(){
         cout<<a*b;
     }
};
/* 
int main(){/*  */

    B b1;
    C c1;
    b1.Sum();
    c1.Prod();
} */