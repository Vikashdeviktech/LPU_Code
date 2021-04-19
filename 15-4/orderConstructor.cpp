#include<iostream>
using namespace std;

class Parent{
    
    public:
    int x;
     Parent(){
       cout<<"I am a parent class "<<endl;
       x=30;
     }
     ~Parent(){
         cout<<"I am a prent destructor"<<endl;
     }
};

class Child:public Parent{
    public:
    Child(){
        cout<<"I am a child class "<<endl;
        cout<<x;
    }
    ~Child(){

        cout<<"I am a child destructor "<<endl;
    }
};

class Son:public Child{
    public:
    Son(){
        cout<<"I am a son class "<<endl;

    }

    ~Son(){
        cout<<"I am a son destructor"<<endl;
    }
};

int main(){
    Son s1;
}
