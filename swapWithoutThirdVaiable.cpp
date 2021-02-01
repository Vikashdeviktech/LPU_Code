#include<iostream>
using namespace std;

int main(){
    int firstNumber,secondNumber;
    cout<<"Enter the first and second number"<<endl; // it used for the next line
    cin>>firstNumber>>secondNumber;
    
    cout<<"The numbers before swapping are"<<firstNumber<<" "<<secondNumber<<endl;

    firstNumber=firstNumber+secondNumber; // 10+15=25
    secondNumber=firstNumber-secondNumber;// 25-15=10
    firstNumber=firstNumber-secondNumber;//25-10=15

    cout<<"the swapped numbers are"<<firstNumber<<" "<<secondNumber;
}