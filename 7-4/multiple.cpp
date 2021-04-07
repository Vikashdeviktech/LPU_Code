#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    string firstName="vikash";
};

class B{
    public:
     string middleName="kumar";
};

class C{
    public:
     string lastName="Dubey";
};

class D:public A,public B,public C{
    
};

int main(){
    D obj;
    cout<<"my name is "<<obj.firstName<<" "<<obj.middleName<<" "<<obj.lastName;
}

