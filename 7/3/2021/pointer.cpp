#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr;   // * it is called astrek 
    ptr=&a;   // & is called ampersand 
    cout<<ptr<<endl;   // it will print the address of ptr
    cout<<*ptr<<endl;  // here it will print the value of a
    cout<<&a<<endl;   // here the address of a is getting printed
    cout<<a<<endl;   // the value of a will get printed
}