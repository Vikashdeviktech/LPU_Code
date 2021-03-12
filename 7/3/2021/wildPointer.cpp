#include<iostream>
using namespace std;

int main(){
    int *p;    // wild pointer 
    int a=10;

    p=&a;  // now p is not a wil pointer

    int *t=NULL;  // t is not a wild pointer and it will get a 0 address
   cout<<t;
}