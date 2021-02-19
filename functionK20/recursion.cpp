#include<iostream>
using namespace std;

int add(int n){
    
    if(n<0)               // base case of the recurssion             
       return 0;
    else{
        cout<<"hello world";
    add(n-1);
    }
    
}

int main(){
    add(10);
    
}