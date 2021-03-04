#include<iostream>
using namespace std;

class Student{

    public:

    Student(){         // name is same as the class name and it does not have any return type it is a memeber function 
        cout<<"I have called automatically";
    }
};


int main(){

Student obj;   // the constructor will be called automatically we don't have to call the constructor

}
