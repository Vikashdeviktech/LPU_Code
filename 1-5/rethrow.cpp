#include<iostream>
using namespace std;

int main(){
    try{
        try{
            throw 20;
        }catch(int n){
            cout<<"The error is "<<n<<endl;
            throw;  // rethrow
        }
    }catch(int x){
        cout<<"Outer block ";
    }
}