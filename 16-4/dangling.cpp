#include<iostream>
using namespace std;

int main(){
   int *p;
   int *t=new int;
   *t=10;
   delete t;
    
    cout<<t;
     //t is a dangling pointer
}