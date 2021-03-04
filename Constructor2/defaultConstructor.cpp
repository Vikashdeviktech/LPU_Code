#include<iostream>
using namespace std;

class Sum{

    public:
    int a,b;       // data memebr

    Sum(){            // a constructor 
        a=20;       // initalizing data memebrs
        b=30;
    }
};

int main(){

    Sum obj;

    cout<<obj.a<<" "<<obj.b;

}