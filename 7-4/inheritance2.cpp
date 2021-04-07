#include<iostream>
#include<string>
using namespace std;

class A{
    public:
     int a=10;
     int b=20;
     string name="vikash";
};

class C:public A{

};

int main(){
    C c1;
    cout<<c1.a<<" "<<c1.b<<" "<<c1.name<<endl;
}


