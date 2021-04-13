#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
     string password="Vikash@1234";  // it is not accessed outside the class or in their child class
    protected:
     string userName="vikash990";
    public:
     string name="Vikash Dubey";


     void show(){
        cout<<password;
    }


};

class Friends:public Student{
    public:

    void show(){
        cout<<password;    // private data memeber is not accessed here
        cout<<userName;    // protected is accessed in the child class 
        cout<<name;
    }

};

int main(){
    Student obj;
    cout<<obj.password; // private data memeber is not accessed here
    cout<<obj.userName; // it is not accessed outside the class 
    cout<<obj.name;

}
