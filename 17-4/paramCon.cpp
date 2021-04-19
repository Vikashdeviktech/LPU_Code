#include<iostream>
using namespace std;

class A{

    public:
     int x;
     A(){

         cout<<"The value of x";
     }
     A(int x1){
         x=x1;
         cout<<"The value of x is "<<x<<endl;
     }
};

class B:public A{
    public:
     int y;
     B(int y1):public(y1){
         y=y1;
         cout<<"The value of y is "<<y;
     }
};


int main(){
    B b1(10);
}