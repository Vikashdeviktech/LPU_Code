#include<iostream>
#include<string>
using namespace std;

class Bicycle{
    public:
     int wheel=2;
     string speed="less";
     string autonomous="No";
     int seat=1;
     string wheelShape="round";
     
};

class Car:public Bicycle{
    public:
    int wheel=4;
    string autonomous="yes";
    int seat=4;
    string speed="fast";
};


class Truck:public Car{
    public:
    int wheel=6;

} ;

int main(){
    Truck t1;
    cout<<t1.seat<<" "<<t1.speed<<" "<<t1.wheel<<" "<<t1.wheelShape;
}