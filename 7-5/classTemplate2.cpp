#include<iostream>
using namespace std;

template<class T,class U>

class A{
    T x;
    U y;
    public:
    A();
};

int main(){
    A<int,char> a;
    A<float,int> b;
}