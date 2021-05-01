#include<iostream>
using namespace std;

void MyHandler(){
    try{
        throw "function error";
    }catch(const char*){
        cout<<"an exceptio is caugth"<<endl;
        throw;  // rethrow
    }
}
int main(){
    cout<<"Main start"<<endl;
    try{
        MyHandler();
    }catch(const char*){
        cout<<"Main end"<<endl;
    }
}