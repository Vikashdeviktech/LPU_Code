#include<iostream>
using namespace std;

class A{            // one parent
    public:
     int a=10,b=20;
    

};

class B:public A{               // first child
    
    public:
     void Sum(){
         cout<<a+b<<endl;
     }
};

class C:public A{                // second child of A

    public:
     void Product(){
         cout<<a*b;
     }

};


int main(){
    B b1;
    b1.Sum();
    C c1;
    c1.Product();
}
