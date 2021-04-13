#include<iostream>
using namespace std;

class X{
     public:

    void show(){
        cout<<"hello A"<<endl;
    }
};

class A:virtual public X{
public:
 void show(){
        cout<<"new Hello";
    }
    
};

class B: virtual public X{
     public:


    
  

};
class C:  public A,  public B{
    
};

int main(){
    C c1;

    c1.show();
}