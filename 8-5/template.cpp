#include<iostream>
using namespace std;

template<typename T>

T Max(T x,T y){  // temaplte function 
    if(x>y)
    return x;
    else 
     return y;
}


int main(){
    cout<<Max<int>(3,7)<<endl;
    cout<<Max<double>(7.8,5.8)<<endl;
    cout<<Max<char>('f','j')<<endl;
}