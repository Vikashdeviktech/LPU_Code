#include<iostream>
using namespace std;

int main(){
    try{
        try{
            throw 20;
        }catch(int n){
            cout<<"i am a inner catch block"<<endl;
            throw ;  //rethrow
        }
    }catch(int n){
        cout<<"I am the outer catch bloak"<<n<<endl;
    }
}