#include<iostream>
using namespace std;

class A{
    public:     // it is accesssed outside the class,in derived class and withing the class
     int x=10;
    protected:  // it is not accesssed outside the class but accessed in derived class but you can access withing the class
     int y=20;
    private:   // it is not accesssed outside the class,in derived class but you can access withing the class
     int z=30;
    public:
     void show(){
    cout<<x<<" "<<y<<" "<<z;             // within the class x,y and z are accessed
     }

    
};

class B:public A{
    public:
    void show(){
        cout<<x <<" "<<y<<" ";     // z is in accessable because it is private
    }
};

int main(){
    A obj;
    cout<<obj.x<<endl;
}
