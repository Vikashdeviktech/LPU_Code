#include<iostream>
using namespace std;

class Base{};
class Derived:public Base{};

int main(){
    Derived d;
    try{
        throw d;
    }catch(Derived d){
        cout<<"Base is cautch";
    }catch(Base b){
        cout<<"Derived is cautch";
    }
}