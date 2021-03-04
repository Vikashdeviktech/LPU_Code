#include<iostream>
using namespace std;

class Sum{
    public:
      int a,b;

    Sum(){       // constructor is used to initalize the value to the data memeber
        a=10;
        b=20;

    }
};

int main(){

    Sum obj;
    cout<<obj.a<<" "<<obj.b;

}