#include<iostream>
#include<string>
using namespace std;

class Car{              // parent class or base class 
    public:
     int seat=2;
     int windows=4;
     string speed="very high";
     int wheels=4;
};

class Truck:public Car{          // child class or derived class or sub class
    public:

    string capacity="very high";
     
};

int main(){

    Truck t1;
    cout<<t1.seat<<" "<<t1.speed<<" "<<t1.wheels<<" "<<t1.windows<<endl;

    Car c1;
    cout<<t1.capacity;   // i have maked the object of parent class and i have tried to access the child class which is not possible


}