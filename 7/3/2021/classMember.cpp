#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
     string name;
     string college;
    
    void showData(){
        cout<<"The name and the college name is "<<name <<" "<<college;
    }

};
int main()
{

Student obj;
Student *ptr;

ptr=&obj;

ptr->name="vikash";  // -> is a arrow symbol
ptr->college="LPU";
ptr->showData();

} 
