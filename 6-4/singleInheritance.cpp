#include<iostream>
#include<string>
using namespace std;

class Cart{             // this was used to pull by man
    public:

    int wheels=2;
    string shape="rectangle";
    string effort="much";
};

class EnhanceCart:public Cart{
    public: 
     int wheels=4;                         // effort is inheriated + wheel is modified
     string effort="less";
};



int main(){
    EnhanceCart e1;
    cout<<e1.wheels<<" "<<e1.shape<<" "<<e1.effort<<endl;
}

