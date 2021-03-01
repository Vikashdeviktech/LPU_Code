#include<iostream>
using namespace std;

class Student{
public:
    Student(){              // no return type and the name is also same as the class name so it is called a constructor
        cout<<"I called automatically when the object is created";
    }
};

int main(){
    Student obj;

}