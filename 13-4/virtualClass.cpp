#include<iostream>
using namespace std;

class A{
    public:

    void show(){
        cout<<"Hello A"<<endl;
    }
};

class B:virtual public A{

};


class C:virtual public A{

};

class D:public B,public C{

};

int main(){

 D obj;

 obj.show();

 /* obj.C::show();   // using scope resolution
 obj.B::show(); */


}


