#include<iostream>
#include<string>
using namespace std;


void studentDetails(string studentName,int rollNumber,int tutionFees){  // define a function
  
  cout<<"The details of the student are "<<studentName<<" "<<rollNumber<<" "<<tutionFees<<endl;

}

string studentCollege(string college){      // function with return type
    return college;
}



int main(){
   
   string studentName;
   int rollNumber;
   int tutionFees;

   for(int i=0;i<5;i++)
   {    
       cout<<"Enter the  details  of the  "<< i <<" Student";
       cin>>studentName>>rollNumber>>tutionFees; 
      studentDetails(studentName,rollNumber,tutionFees);    // calling of the function with arguments

}

cout<<studentCollege("LPU");
}


