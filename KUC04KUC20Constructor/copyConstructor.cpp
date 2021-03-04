#include<iostream>
using namespace std;

class CopyConstructor{
    public:
    int a, b;

    CopyConstructor(int a1,int b1){
        a=a1;
        b=b1;
    }


};

int main(){
    CopyConstructor obj(10,20);
    CopyConstructor obj2 =obj; // it is a copyconstructor
    cout<<obj2.a<<" "<<obj2.b;
    
}