#include<iostream>
using namespace std;

class Base{
    public:
     int x=20;
    protected:
     int y=10;
    private:
     int z=0;
};

class PublicDerived:public Base{
    public:
    void Show1(){
        cout<<"The value of X ,y and Z are "<<x<<" "<<y<<endl;
    }
    // x is public and you can access 
    // y is protected 
    // z is not accessed
};

class ProtectedDerived:protected Base{
    public:
    void Show2(){
     cout<<"The value of X ,y and Z are "<<x<<" "<<y<<endl;}
    // x is protected 
    // y is protected
    // z is private and is not accessed
};


class PrivateDerived:private Base{
    public:
    void Show3(){
     cout<<"The value of X ,y and Z are "<<x<<" "<<y<<endl;}
    // x is private
    // y is private
    // z is not accessed
};


int main(){
  

    PublicDerived Pd;
    cout<<Pd.x;
  
    
}