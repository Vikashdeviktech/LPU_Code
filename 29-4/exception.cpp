#include<iostream>
using namespace std;

int main(){
    int a,b;
    float x,y;
    cin>>x>>y;
    try{

        if(y==0){
            throw "It cannot be divided by zero";
        }else{
              cout<<x/y;
        }

    }catch(const char* error){
        cout<<error;
    }

  


  

}