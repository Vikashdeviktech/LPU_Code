#include<iostream>
using namespace std;

class PureV{
    public:
    virtual void show()=0;
    virtual void display()=0;
};

class Child:public PureV{
    public:
    void show(){
        cout<<"show"<<endl;
    }

    void display(){
        cout<<"display";
    }


};

int main(){
    PureV *obj;
    Child obj2;

    obj=&obj2;

    obj->display();
    obj->show();
}