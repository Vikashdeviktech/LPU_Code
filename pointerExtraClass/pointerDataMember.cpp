#include<iostream>
using namespace std;

class Sum{
    public:
     
     int a,b,c;

     void showData(){
         cout<<"The value of a and b is "<<a<<" "<<b<<endl;
     }
};

int main(){
    Sum obj;
    Sum *ptr;
    ptr=&obj;

    int Sum::*ptr1=&Sum::c;
    ptr->*ptr1=30;
    cout<<ptr->c<<endl;

    ptr->a=20;      // -> arrow symbol used in pointer
    ptr->b=30;   

    ptr->showData();

}