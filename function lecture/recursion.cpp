#include<iostream>
using namespace std;

int fact(int n){
    if(n==1 or n == 0)       // base case 
     return 1;
    else 
     return (n*fact(n-1));    
}


int main(){

    cout<<fact(5);

    
}
