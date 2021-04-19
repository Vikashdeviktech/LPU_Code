#include<iostream>
using namespace std;


int main(){

    int x,y;   // x and y is getting a static memory or a fixed memory or stack memeory and get a memory at compile time
   
    int *t=new int; // t is a dynamic memory it get a memory in heap it get a memeory at run time 
    int *t=NULL;
    t=new int;

    int *arr=new int[30];

    *t=30;  // this is used to allocate the value t to 30
    cout<<*t<<endl;
    delete t;// if you don't delete the memory then we will have a memory leak
    cout<<*t;
    delete[] arr;   // delete an array
}