#include<iostream>
using namespace std;

template<class T,class U>

class A{
    T x;
    U y;
    public:
    A(){
        cout<<"Constructor"
    }
};

int main(){
    A<char,char> a;
    A<int,double> b;
}