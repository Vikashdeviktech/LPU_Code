#include<iostream>
#include<string>
using namespace std;

class Student{
   
   public:
    string studentName;  // data member 
    int rollNumber;
    float studentFees;
   
    void showStudentDetails(){   // memeber function inside the class 
        cout<<"The name of the student is "<<studentName<<"\n";
        cout<<"The rollNumber of the student is"<<rollNumber<<endl;
        cout<<"The student fees is "<<studentFees<<endl;
    }

    void showStudentDetailsOutsideTheClass();

};

void Student:: showStudentDetailsOutsideTheClass(){     // member function outside the class 
        cout<<"The name of the student is "<<studentName<<"\n";
        cout<<"The rollNumber of the student is"<<rollNumber<<endl;
        cout<<"The student fees is "<<studentFees<<endl;
}

class Teacher{
    public:

};

class Staff{

};


int main(){
    Student stdOne;
    cout<<endl;
    cout<< "the size of the class student "<<sizeof(Student);
    cout<<"The size of class teacher"<<sizeof(Teacher);
    stdOne.studentName="Vikash";
    stdOne.studentFees=77777;
    stdOne.rollNumber=99;

   stdOne.showStudentDetails();
   stdOne.showStudentDetailsOutsideTheClass();

   Student stdTwo;
   stdTwo.studentName="Mukesh";
    stdTwo.studentFees=888;
    stdTwo.rollNumber=88;

   stdTwo.showStudentDetails();
   stdTwo.showStudentDetailsOutsideTheClass();
}
