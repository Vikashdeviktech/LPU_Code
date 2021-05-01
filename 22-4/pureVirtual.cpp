#include<iostream>
using namespace std;

class A{

    public:
     
     virtual void Show()=0;   // decelaration
     virtual void print()=0;
     virtual void sum()=0;
     virtual void add()=0;

};

class B:public A{
    public:

    void Show(){
        cout<<"I am show ";
    }

    void print(){
        cout<<"I am a print";
    }
}