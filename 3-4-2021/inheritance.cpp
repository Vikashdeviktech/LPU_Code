#include<iostream>
using namespace std;

class Base{};
class Child:public Base{};

int main(){
    Child d;
    try {
     throw d;
    }catch(Child b){
        cout<<"Error is caught in child class";
    }
    catch(Base b){
        cout<<"Error is caugth in base class"<<endl;
    }
}