#include<iostream>
using namespace std;

int sum(int a,int b=20){     // b is called default parameter
    return a+b;
}


int main(){

    cout<<sum(10 ,44);
}