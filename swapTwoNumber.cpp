#include<iostream>
using namespace  std;

int main(){

    int firstNumber,secondNumber;

    cout<<"enter the two numbers"<<endl;
    cin>>firstNumber>>secondNumber;  // firstNumber=10  secondNumber=15

    cout<<"The numbers before swapping are"<<firstNumber<<" "<<secondNumber<<endl;
    firstNumber=firstNumber+secondNumber;  // firstnumber=10+15=25
    secondNumber=firstNumber-secondNumber;  // secondNumber=25-15=10
    firstNumber=firstNumber-secondNumber ; // firstNumber=25-10=15

    cout<<"The swapped number are"<<firstNumber<<" "<<secondNumber;

    cout<<sizeof firstNumber;


}
