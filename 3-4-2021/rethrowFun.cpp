#include<iostream>
using namespace std;

void handler(){
    try {
        throw 40;
    }catch(int x){
        cout<<x<<endl;   // 2nd this is executed
        throw;
    }
}
int main(){
    cout<<"main strt"<<endl;  // 1st this is executed
    try{
        handler();
    }catch(int z){
        cout<<z;   // 3rd this is executed
    }
}