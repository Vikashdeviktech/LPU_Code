#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"I am from class A"<<endl;
    }
};

class B:public A{   // it will get a copy of A show method
};

class C:public A{   // it will get a copy of A show method
};

class D:public B,public C{};

int main(){
    D d1;
    d1.B::show();  // clear instruction to the compile to access B show
    d1.C::show();
}