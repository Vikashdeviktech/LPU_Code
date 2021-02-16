#include<iostream>
using namespace std;

int main(){

    int arr[5]={2,3,4,11,2};
    int *p;

    p=arr;                     // this is the address of the first element of an array

    cout<<"the address of the first element "<<p<<endl;
    cout<<"the first elemet of the array is"<<*p<<endl;
    cout<<"the second elemet of the array is"<<++(*p)<<endl;


    for(int i=0;i<5;i++){
        cout<<"All the element in the array is "<<*p<<endl;
        p++;

    }
  

}