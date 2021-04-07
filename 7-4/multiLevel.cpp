#include<iostream>
#include<string>
using namespace std;

class A{
    public:
     string name="vikash";
};

class B:public A{     // this is child of A
    public:
     int roll=34;
};

class C:public B{    // this is a child of b
    public:
    string section="c section";
};

class D:public C{   // this is s child of c

};

int main(){

D d1;
cout<<d1.name<<" "<<d1.roll<<" "<<d1.section;

}