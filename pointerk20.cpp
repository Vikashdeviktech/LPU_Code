#include<iostream>
using namespace std;


int main(){

    int a=10;                            // cc108ne88
    int *p; 
     char c='c'; 
     char *s;                           // * astriek it is a pointer that store integer value

    s=&a;                                // ampersand that is used to assing the address 
    
    cout<<"The address of a is "<<p<<endl;
    cout<<"The address can be written as &a    "<<&a<<endl;

    cout<<"The value of a is"<<a<<endl;
    cout<<"The value of a is"<<*p;

}