#include<iostream>
using namespace std;

class A{
    public:
     int a;

    A(){
        cout<<"I am a parent class "<<endl;
        a=20;
    }
};


class B:public A{
    public:
    B(){

        cout<<"I am a child class  of A"<<endl;
    
    }

};

class C:public B{
    public:
    C(){
        cout<<"I am a child of B"<<endl;
    }
};

int main(){
    C c1;
}
