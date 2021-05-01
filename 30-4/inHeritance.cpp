#include<iostream>
using namespace std;

class Base {};
class Derived:public Base {};

int main(){
    Derived d;
    try{
        throw d;
    }
catch(Derived d){
        cout<<"Derived Exception";

    }catch( Base b){
        cout<<"Caught base exception";
    }
}