#include<iostream>
#include<string>
using namespace std;

class Student{      //  class is a keyword used to make the class
   
   public:                   // access specifiers

     string stdName;       // data memebers of the class
     int rollNumber;
     float stdFees;   
                                    // memeber function of the class  which is defined inside the class
     void displayStudentInfo(){
          cout<<"function defined inside the class"<<stdName<<" "<<rollNumber<<" "<<stdFees<<endl;
     }  

     void displayStudentInfoOutside();

};

void Student::displayStudentInfoOutside(){          // member function defined outside the class 
    cout<<"function defined outside the class"<<stdName<<" "<<rollNumber<<" "<<stdFees<<endl;
}

int main(){
    Student stdObj;          // object is the instance of the class using this we can call the data memebrs and memeber function

    stdObj.stdName="Vikash";           
    stdObj.rollNumber=99;
    stdObj.stdFees=888.99;

    cout<<stdObj.stdName<<" "<<stdObj.rollNumber<<" "<<stdObj.stdFees<<endl;
    stdObj.displayStudentInfo();        // calling of the memeber function of the class
    stdObj.displayStudentInfoOutside();





  Student stdObjTwo;

  stdObjTwo.stdName="Mukesh";
  stdObjTwo.rollNumber=99;
  stdObjTwo.stdFees=999;

  stdObjTwo.displayStudentInfo();

}