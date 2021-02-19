#include<iostream>
#include<string>
using namespace std;

class Student{

    public:
     string userName="vikash990";        // data memebers of the class
     string userPassword="999";


    void printStudentDetails(){             // memeber function of the class
        cout<<"the details of the student are "<<userName<<" "<<userPassword<<endl;
    }

};

int main(){
   
   Student std1;        // object of the class student
   Student *ptr;      // address of the object to the student class

   ptr=&std1; 

   cout<<ptr->userName<<" "<<ptr->userPassword<<endl;   // -> it is used in pointer to access the data member of the class or memeber functioon of the class
   ptr->printStudentDetails();


}
