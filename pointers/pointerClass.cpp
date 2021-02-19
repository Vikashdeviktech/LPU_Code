#include<iostream>
using namespace std;
class Sample{
    public:
    int a=10;
    int b;

    void showData(){
        cout<<b<<endl;
    }
};

int main(){

    Sample obj;
    Sample *ptr,*ptr2;
   
    ptr=&obj;    // thisb is how pointer is pointing to the object of the class sample

    cout<<ptr->a<<endl;  // normal variable we were using . operator but in this we will be using ->
   
    int Sample::*ptr3=&Sample::b;     // ptr3 points to the data member of the b

    obj.*ptr3=30;
    obj.showData();

    ptr->*ptr3=25;         // b=30
    ptr->showData();






}