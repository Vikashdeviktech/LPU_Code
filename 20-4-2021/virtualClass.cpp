#include<iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout<<" I am a base class ";
    }

    void show(){
        cout<<"Show base class "<<endl;
    }
};

class Derived:public Base{
    public:
    void print(){
        cout<<"I am a print from dervied  class "<<endl;
    }

    void show(){
        cout<<"Show from a derived class "<<endl;
    }

};

int main(){


    Base *bptr;
    Derived d;
    bptr=&d;  // passed the drived class address in the base class
    bptr->print();
    bptr->show();
}