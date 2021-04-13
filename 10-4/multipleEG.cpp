#include<iostream>
#include<string>
using namespace std;

class First{                // first Parent
    public:
     string firstName="Vikash";

    
};
 
class Last{                   // second parent
    public:
     string lastName="Dubey";
};

class Full:public First,public Last{              // full name
    public:
    void printName(){
        cout<<firstName<<" "<<lastName;
    }
};


int main(){
    Full obj;
    obj.printName();
}