#include<iostream>
using namespace std;

class Base{
    public:
    void Show(){    // show member function is here
        cout<<" I am a base class"<<endl;
    }
};

class Child:public Base{
    public:
    void Show(){       // show is overridden
        cout<<"I am a child class "<<endl;
        Base::Show();
    }
};

int main(){
    Child obj;
    obj.Show();  // this will call the child class show memeber function
    obj.Base::Show();  // this will call the base class show member function
}