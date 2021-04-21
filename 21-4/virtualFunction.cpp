#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"I am a base class "<<endl;
    }

    void show(){
        cout<<"I am a show from base class "<<endl;
    }
};

class child:public base{
    public:
    void print(){
        cout<<"I am a child class "<<endl;
    }

    void show(){
        cout<<"I am a show class "<<endl;
    }
};

int main(){

    base *ptr;
    child cd;
    ptr=&cd;

    ptr->print();
    ptr->show();
}