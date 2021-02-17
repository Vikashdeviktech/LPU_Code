#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *p;
    int **p2;

    p=&a;
    p2=&p;

    cout<<" the address of p and p2 is "<<p<<" "<<p2<<endl;

    cout<<"The value of *p ,*p2 ,**p2 are "<<*p<<" "<<*p2<<" "<<**p2<<endl;



}