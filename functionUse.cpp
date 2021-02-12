#include<iostream>
#include<string>
using namespace std;
   
void studentInfo(string name,int roll, float fees);    // declaration of a function with parameters



int main(){
  
  studentInfo("vikash dubey",44,6666);     // calling of a function these are called argument
  studentInfo("mukesh dubey",33,77777);

}

void studentInfo(string name,int roll, float fees){      // declaration of a function with parameters
   
   cout<<"The details of the students are "<<name<<" "<<roll<<" "<<fees<<endl;    // defination of the function
}