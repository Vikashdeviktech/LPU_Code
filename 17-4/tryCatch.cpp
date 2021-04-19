#include<iostream>
using namespace std;

int main(){

    try{
        cout<<10/0;

    }catch(const char* e){
        cerr<<e;
        cout<<"it cannot be divided by zero";
    }
}