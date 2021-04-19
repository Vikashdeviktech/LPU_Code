#include<iostream>
using namespace std;

int main()
{
    long Mem=0x7fffffff;
    try{
        char *ptr=new char[Mem];
        cout<<"I got the memory";
    }catch(const bad_alloc& e){
        cout<<e.what();
    }
}