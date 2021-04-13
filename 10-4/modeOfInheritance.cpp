#include<iostream>
using namespace std;

class A{
    public:     // it is accesssed outside the class,in derived class and withing the class
     int x=10;
    protected:  // it is not accesssed outside the class but accessed in derived class but you can access withing the class
     int y=20;
    private:   // it is not accesssed outside the class,in derived class but you can access withing the class
     int z=30;
    
};

class B:public A{   // public mode
    public:
                 // x is public and it is accessed
                 // y is protected and it is accessed
                 // z is private and is in access
};
class C:protected A{   // protected mode

    public:
     void Show(){
         cout<<x <<" "<<y<<" ";
     }
         // x is protected and is accessed
         // y is protected
         // z is private and is inaccessed

};


class D:private A{     // private mode

    public:

     // x is private
     // y is private
        // z is private and is inaccessed
};

class E: public D{

}

int main(){
    A obj;
    cout<<obj.x<<endl;
}
