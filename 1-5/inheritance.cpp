#include<iostream>
using namespace std;

class Base{
    private:
    int a,b;

};
class Derived:public Base{
    // a and b are in accessable
};

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