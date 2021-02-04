#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *p;      // * it is called astriek
    p=&a;       // & ampersand

    cout<<"the address of  a is "<<p<<endl;   //  p is used to print the address of a
    cout<<" the value of a"<<*p;    // whateever the value is in a print that
}