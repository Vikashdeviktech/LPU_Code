#include<iostream>
using namespace std;

int main(){

    int x=10;
    int *p1,**p2;

    p1=&x;
    p2=&p1;

    cout<<x<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;  //  


}