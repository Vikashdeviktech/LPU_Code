#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
     int leg=4;
     int eyes=2;
     bool fly=true;
};

class Cat:public Animal{       // inheritance 
   public:
    bool fly=false;

} ;

int main(){
    Cat c1;
    cout<<c1.eyes<<" "<<c1.leg<<" "<<c1.fly;
}