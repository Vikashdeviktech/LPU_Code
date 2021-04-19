#include<iostream>
using namespace std;

int main(){
    int *x=NULL;   // 1st syntax
    x=new int;   // new keyword is used to allocate the dynamic memory
    *x=30;
   
    int *p=new int;   // 2nd syntax
    *p=50;

    cout<<*x<<" "<<*p;

    int *P=NULL;

    delete p;
    delete x;

    cout<<*x<<" "<<*p;


}