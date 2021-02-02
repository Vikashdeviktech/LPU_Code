#include<iostream>
#include<string>
using namespace std;

class Student{
   
   public:
    string studentName;  // data member 
    int rollNumber;
    float studentFees;
   
    void showStudentDetails(){   // memeber function
        cout<<"The name of the student is "<<studentName<<"\n";
        cout<<"The rollNumber of the student is"<<rollNumber<<endl;
        cout<<"The student fees is "<<studentFees<<endl;
    }

};

int main(){
    Student stdOne;
    stdOne.studentName="Vikash";
    stdOne.studentFees=77777;
    stdOne.rollNumber=99;

   stdOne.showStudentDetails();
}
