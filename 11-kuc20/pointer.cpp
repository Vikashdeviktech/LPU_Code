#include<iostream>
using namespace std;

int main(){

    int *p;   // * it is used in pointer and use to declare a pointer variable
    int x=10;
    char c;
    void *p1;
    
    p1=&c;

    p=&x;  // the address of x will be store in the p

    cout<<x<<endl;  // 10
    cout<<*p<<endl;  //at p whatever the value is there print the value 10
    cout<<&x<<endl;  // &x it means the address of the x
    cout<<p<<endl;  // the address of the x


}