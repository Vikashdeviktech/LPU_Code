#include<iostream>
using namespace std;

void MyHandler(){

    try{
        throw "hello";
    } catch(const char* s){
        cout<<"The error is "<<s<<endl;
        throw;  // re-throw

    }
}

int main(){
    cout<<"Start"<<endl;

    try{
        MyHandler();
    }catch(const char*){
        cout<<"I am from the main block"<<endl;
    }
    cout<<"It's end";
}
