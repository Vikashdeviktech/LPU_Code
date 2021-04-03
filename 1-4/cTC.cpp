#include<iostream>
#include<string>
using namespace std;

class A{
    private:
     string name="vikash";
    public:
     string getString(){
         return name;
     }
     void display(){
         cout<<name<<endl;
     }
};

class B{
    string b;
    public:
    void operator=(A a){
        b=a.getString();
    }

    void display(){
        cout<<b;
    }
};

int main(){
    A a;
    B b;

    b=a;

    a.display();
    b.display();
}