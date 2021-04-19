#include<iostream>
using namespace std;

class A{
   public:
   int x;
   A(int x1){
       x=x1;
   }

};

class B:public A{
   public:
   int y;
   B(int y1):A(10){   // this is how we call the parameterized constructor

       y=y1;
       cout<<x<<y;lldiv
   }

};

int main(){

    B b1(10);
}