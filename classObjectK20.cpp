#include<iostream>
#include<string>

using namespace std;

class Student{                       // class keyword is used to declare class 
    public:                          //access specifier 

    string studentName;            // data members of the class
    int rollNumber;
    float  tutionFees;

      void displayStudentDetails(){      // member function inside the class
          cout<<"the student details are: "<<studentName <<endl<<rollNumber <<endl<<tutionFees<<endl;
      }
   
      void displayStudentInfoOutside();

};

void Student::displayStudentInfoOutside(){    // memebr function outside the class;  using scope resolution
    cout<<"the student details are: "<<studentName <<endl<<rollNumber <<endl<<tutionFees<<endl;
}

int main(){

  Student stdOne;      // stdOne is the object of the class Student or instance of the class student
  stdOne.studentName="Vikash Dubey";
  stdOne.rollNumber=13;
  stdOne.tutionFees=66666.88;

  stdOne.displayStudentDetails();
  

  Student stdTwo;

  stdTwo.studentName=" Rahul Mishra";

}


