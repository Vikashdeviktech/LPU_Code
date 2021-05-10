#include<iostream>
using namespace std;

template<typename T>

T myMax(T x,T y){
    if(x>y){
        return x;
    }else {
        return y;
    }
}

int main(){
    cout<<myMax<int>(3,5)<<endl;
    cout<<myMax<double>(3.2,7.5)<<endl;
    cout<<myMax<char>('g','e');
}