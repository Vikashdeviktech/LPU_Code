#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student{          // structure 
    string name;
    int rollNumber; 
    
};


int main(){
    ofstream wf("student.dat",ios::out|ios::binary);  // to create file
    if(!wf){                // check whether a file is open or not
        cout<<"Cannot open a file";
        return 1;
    }
    Student st[2];                 // initalize the values   st[0].name,st[0].rollNumber  and st[1]
    st[0].name="Vikash";
    st[0].rollNumber=55;
    st[1].name="Mukesh";
    st[1].rollNumber=32;

  for(int i=0;i<2;i++)
  {
      wf.write((char *) &st[i], sizeof(Student));  // syntax for writing data in a binary file
  }

 wf.close();


}