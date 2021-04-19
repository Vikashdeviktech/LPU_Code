#include<iostream>
using namespace std;
int main(){
    int *p;
  
   {
       int *x;
   }
    delete p;

    cout<<p;
    cout<<x;

}