#include<iostream>
using namespace std;

class Sum{
    public:
    int a,b;

    Sum(int a1,int b1){
        a=a1;
        b=b1;
    }

};

int main(){

Sum obj(10,30);
Sum obj2=obj;     // copy constructor

cout<<obj2.a<<" "<<obj2.b;

}