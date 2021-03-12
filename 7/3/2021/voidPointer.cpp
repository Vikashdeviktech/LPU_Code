#include<iostream>
using namespace std;

int main(){
    char a=10;
    void *ptr=&a;
    cout<<*(char *)ptr;
    
}