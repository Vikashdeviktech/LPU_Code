#include<iostream>
using namespace std;

class Op{
    private:
    int  x=10;
    public:
    void operator ++(){
        x=x+2;
    }

    void print(){
        cout<<"The value of x is "<<x;
    }   

};

int main(){
    Op op1;
    ++op1;
    op1.print();

}