#include<iostream>
using namespace std;

int main(){
  
  int firstNum,secondNum;
  cout<<"Enter the two number";
  cin>>firstNum>>secondNum;       // 10 15

  cout<<"The number before swapping is "<<firstNum<<" "<<secondNum;

  firstNum=firstNum+secondNum ;  //  firstNum=10+15=25
  secondNum=firstNum-secondNum ;  // secondNum=25-15=10
  firstNum=firstNum-secondNum ;//     firstNum=25-10=15

  cout<<" the swapped number are "<<firstNum<<" "<<secondNum;




}