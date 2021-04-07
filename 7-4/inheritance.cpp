#include<iostream>
#include<string>
using namespace std;

class Animal{              // parent class or base class 
    public:
      int leg=4;
      int eyes=2;
      string category="carnivoreos";


};
class cow:public Animal{          // child class or derived class or sub class
    public:
    string category="herbivores";
    int ears=2;
};

int main(){
    cow c1;
    cout<<c1.leg<<" "<<c1.eyes<<" "<<c1.category<<endl;
    Animal a1;
    cout<<a1.leg<<" "<<a1.eyes<<" "<<a1.category;
}