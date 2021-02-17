#include<iostream>
#include<string>
using namespace std;

void DisplayInfo(string name,int rollNumber,int systemId);   // decaration of a function    name,rollNumber systemid are called parameter   

void DisplayInfo(string name,int rollNumber,int systemId){    // defining of a function
    cout<<"The details of the student are"<< name<<endl<< rollNumber<<endl<< systemId<<endl;

}

int main(){

    DisplayInfo("Vikash",55,2015009);          // calling of a function  "Vikash",55,2015009;   these are arguments
    DisplayInfo("Mukesh",585,7015009);  
}