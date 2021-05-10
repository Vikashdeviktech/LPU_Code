#include<iostream>
using namespace std;

template<typename T>

class Array{
    private:
    T *p;
    int size;
    public:
    Array(T arr[],int s);   // constructor
    void print();
};

template<typename T>

Array<T>::Array(T arr[],int s){
    ptr=new T[s];
    size=s;
    for(int i=0;i<size;i++)
     ptr[i]=arr[i];
}

template<typename T>
void Array<T>::print(){
    for(int i=0;i<size;i++){
        cout<<(*p+1);
    }
}



int main(){
    int arr[5]={1,22,3,4,5};
    Array<int> a(arr,5);
    a.print();
}