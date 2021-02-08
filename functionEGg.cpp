#include<iostream>
using namespace std;


void sum(int a,int b){    // declaration and defination of the function  

    cout<<a+b<<endl;

}

int main(){
    
    int a1,b1;
    cin>>a1>>b1;
    sum(a1,b1);             // calling of the function  
    sum(30,50);
    sum(60,70);
    sum(180,20);
    sum(308,508);
    sum(670,708);

}