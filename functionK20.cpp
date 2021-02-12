#include<iostream>
#include<string>

using namespace std;

void displayInfo(string studentName,int rollNumber, float studentFees)    // declarations of the function(  studentName ,rollNumber,student fees are called parameters) 
 {                                                      // string studentName="vikash dubey"  int roolNumber=77
     cout<<" the student details are "<<studentName<<" "<<studentFees<<" "<<rollNumber<<endl;    // defination of the function
 }

int sum(int a,int b,int c,int d){
    int e=a+b+c+d;
    return e;
}

int  sum(int a,int b){
    int c=a+b;
    return c;                 // function return a int value
}  

int sum(int a,int b,int c){

    int d=a+b+c;
    return d;
}



int main(){
  
  displayInfo("vikash dubey",55,90000);      // calling of a function
   displayInfo("Rahul",33,90000);       // the value whic is passesd to the functions are called arguments 

   int resultOne=sum(10,9);
   
   cout<<" the sum of the number is "<<resultOne<<endl;

   int resultTwo=sum(10,9,8);

   cout<<"The sum of the number is "<<resultTwo;


   cout<<"The sum of the numbers are "<<sum(10,20)<<" "<<sum(20,30,50)<<endl;



   cout<<sum(10,8);


}