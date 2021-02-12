#include<iostream>
using namespace std;

void incrementOne(int *a){      // & it is taking the address of a   *a=&a;
    (*a)++;
    cout<<"in the function the value of a "<<*a<<endl;

};

int main(){
    int a=5;
   
    incrementOne(&a);
    cout<<"i am in the main funcytion  "<<a;
}