#include<iostream>
using namespace std;

int main(){
    int *p;
    delete p;
    cout<<*p;  // it is a danzling pointer because we are trying to access deleted pointer

    {
        int *t;
    }

   /*  cout<<*t; */// you try to access outside the block so it is a daanzling pointer
}