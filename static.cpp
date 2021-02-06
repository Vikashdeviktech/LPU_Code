#include<iostream>
using namespace std;

class Student{
    public:
       int rollNumber;
       static int systemId;

       static void displayStudentInfo(){
           cout<<systemId;
       }
};

int Student::systemId=77777;

int main(){
    Student studentOne;
    studentOne.rollNumber=44;    
    cout<<studentOne.rollNumber<<endl<<studentOne.systemId<<endl;

    Student studentTwo;

    studentTwo.rollNumber=99;

    cout<<studentTwo.rollNumber<<endl<<studentTwo.systemId;

}