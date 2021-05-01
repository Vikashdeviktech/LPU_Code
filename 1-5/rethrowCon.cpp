#include<iostream>
using namespace std;

class Test{
    public:
    Test(){
        cout<<"I am a constructor"<<endl;
    }
    ~Test(){
        cout<<"I am a destructor"<<endl;
    }
};

int main(){
    try{
        Test t1;
        throw 0;
    }
    catch(int i){
        cout<<"Catch "<<i<<endl;
    }
}