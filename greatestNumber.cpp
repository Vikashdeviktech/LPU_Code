#include<iostream>
using namespace std;

int main(){

    int firstNumber,secondNumber,thirdNumber;
    cout<<"Enter the three number"<<endl;
    cin>>firstNumber>>secondNumber>>thirdNumber;  // 10 14 4

    if(firstNumber>secondNumber && firstNumber> thirdNumber)  //  0 1 =0; 0 1=0 1 1=1 0 0=0
       cout<<"The greatest number is "<<firstNumber; 
      
    else if(secondNumber>firstNumber && secondNumber>thirdNumber)
         cout<<"The greatest number is "<<secondNumber; 
    else
          cout<<"The greatest number is "<<thirdNumber; 
}