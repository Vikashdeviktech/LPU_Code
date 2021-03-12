#include<iostream>
using namespace std;

class Sum{
    public:

    int a ,b;

    Sum(int a1,int b1){
        a=a1;
        b=b1;
    }

};

int main(){

    Sum obj1(10,20);

    Sum obj2=obj1;      // copy constructor it means we are coping the value of one one constructor to the another constructor of the same class
   cout<<obj2.a<<" "<<obj2.b;
 
}