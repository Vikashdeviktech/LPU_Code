#include<iostream>
using namespace std;

int main(){
    int *p=NULL;    // first way
    p=new int;

    int *t=new int;  // second way

    *p=30;
    *t=20;


    int *s=new int(30);   // third way
    cout<<*p<<" "<<*t<<" "<<*s<<endl;

    delete p;
    delete t;
    delete s;

     cout<<*p<<" "<<*t<<" "<<*s;


}