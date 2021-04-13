#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    string firstName="Vikash";
};

class B{
    public:
    string middleName="Kumar";
};

class C{
    public:
    string lastName="Dubey";
};

class D:public A,public B,public C{


};

int main()
{
    D obj1;

    cout<<" My name is "<<obj1.firstName;
}



