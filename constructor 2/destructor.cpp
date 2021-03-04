#include<iostream>
using namespace std;

class Employee{
    public:

   
    Employee(){
        cout<<"I am destructor and i am called automatically";
    }
};

int main(){
    Employee emp1;

}