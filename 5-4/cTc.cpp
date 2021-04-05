#include<iostream>
#include<string>
using namespace std;

class A{
    private:
     string name="Vikash";
    public:
     string getString(){
         return name;
     }
     void display(){
         cout<<name<<endl;
     }

};

class B{
    string name2;
    public:
    void operator=(A a){
        name2=a.getString();
    }
    void display(){
        cout<<name2<<endl;
    }


};

int main(){
    A a;
    B b;
    b=a;   // one class is converted into the other class 
    a.display();
    b.display();
}















