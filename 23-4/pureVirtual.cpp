#include<iostream>
using namespace std;

class A{
    public:
    virtual void show()=0;  // pure virtual function
    virtual void print()=0;
    virtual void display()=0;
};

class B:public A{
    public:

    virtual void show(){
        cout<<"I am a show function "<<endl;
    }

    virtual void print(){
        cout<<"I am a print function "<<endl;
    }

   virtual  void display(){
        cout<<"I am a display function "<<endl;
    }
    
};



int main(){
    A *ptr;
    B bt;
    ptr=&bt;

    ptr->display();
    ptr->print();
}