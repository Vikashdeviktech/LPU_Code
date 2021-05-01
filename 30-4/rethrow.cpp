#include<iostream>
using namespace std;

int main(){
    try{
        try{
            throw 20;
        }
        catch(int n){
            cout<<"Inner catch is "<<n<<endl;
            throw;

        }
    } catch(int x){
        cout<<"I am the outer block";
    }
}