#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *p;       // * it is astriek it is use to declare the variable
    p=&a;          // & it is used to assign the value

    cout<<"the address of a is"<<p<<endl;
   cout<<"the value of  a is"<<&*p<<endl;    // the value at address p
}