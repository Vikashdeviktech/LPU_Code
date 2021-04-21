#include<iostream>
using namespace std;

class X{
    public:

    void Sum(int x){
        cout<<x<<endl;
    }

    void Sum(int x,int y){
        cout<<x+y<<endl;
    }

    void Sum(int x,int y,int z){
        cout<<x+y+z<<endl;
    }
};

int main(){
    X obj;
    obj.Sum(10);
    obj.Sum(10,20);
    obj.Sum(10,20,30);
}