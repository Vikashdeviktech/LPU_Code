#include<iostream>
using namespace std;

class A{
    public:
    int x;

    A(){
        cout<<"I am a class A"<<endl;
        x=20;
    }

    ~A(){
        cout<<"I am a destructor of A"<<endl;
    }

};

class B:public A{
    public:
   
    B(){
        cout<<" I am a class B"<<endl;
        cout<<x;
    }

    ~B(){

        cout<<"I am a destructor of B"<<endl;
    }
};

int main(){

   B b1;


}