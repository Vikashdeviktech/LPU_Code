#include<iostream>
using namespace std;

class A{
    public:
     int a;

    ~A(){
        cout<<"I am a destructor of A"<<endl;
    }
};


class B:public A{
    public:
   
        ~B(){
        cout<<"I am a destructor of B"<<endl;
    }

};

class C:public B{
    public:
  

        ~C(){
        cout<<"I am a destructor of C"<<endl;
    }
};

int main(){
    C c1;
}
