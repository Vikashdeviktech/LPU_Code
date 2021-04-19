#include<iostream>
using namespace std;

int main(){
    int *p=new int;
    // or
  
    cout<<p;
    delete p;
    cout<<p;
}