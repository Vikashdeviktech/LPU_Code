#include<iostream>
using namespace std;

int main(){
    int a=10;
    char n='c';
    int *p,*t; 

    void *s;

    s=&n;



                    // it is used to declare a pointer
    p=&a;                     // it is used to assign address of a in p

    cout<<"The address of a is "<<p<<endl;
    cout<<"The address of a is "<< &a<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<" The value of a is "<<*p<<endl;




}