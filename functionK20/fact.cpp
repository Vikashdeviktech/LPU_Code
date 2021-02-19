#include<iostream>
using namespace std;

int fact1(int num){
    if(num==1 ||num==0)
      return 1;
    else
      return num*fact1(num-1);      //  5*24
}

int main(){
    long long s;
    cout<<"Enter the number for the factorial";
    cin>>s;
    int d=fact1(s);
    cout<<d;
}