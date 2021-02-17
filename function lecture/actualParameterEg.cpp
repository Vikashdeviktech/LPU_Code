#include<iostream>

using namespace std;

void IncrementOne(int *a){
    (++a*);
    cout<<" the value of a is "<<*a<<endl;

}

int main(){
    int a=10;
    IncrementOne(&a);                                       // & is used to pass the address
    cout<<"The value inside the main function"<<a;


}