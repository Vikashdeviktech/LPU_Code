#include<iostream>
using namespace std;

class Test{
    public:
    Test(){cout<<"I am a test from constructor"<<endl;}
    void show(){
        cout<<"show"<<endl;
    }
    ~Test(){cout<<"I am a test from destructor "<<endl;}

};

int main(){
    try{
        Test t1;
        t1.show();
        throw 10;  // rethrow 
    }catch(int i){
        cout<<"Catch "<<i;
    }
}