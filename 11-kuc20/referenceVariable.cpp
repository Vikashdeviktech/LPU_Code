#include<iostream>
using namespace std;

int main(){
    int x;
    int& ref=x;

    ref=20;
    cout<<x;

}