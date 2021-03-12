#include<iostream>
using namespace std;

int main(){
  
    int *p,*t=NULL;    // wild pointer because it is declare but not initalize
                     // when we assign a NULL then the pointer get 0 address
    int a=10;
    p=&a;      // so the p become normal pointer

    cout<<t;
}