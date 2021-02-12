#include<iostream>
using namespace std;

int sum(int a,int b){           // addition of the two number 

    int c=a+b;
    return c;
}
int sum(int a,int b,int c)     // addition of the three number with the same function sum
{
    int d=a+b+c;
    return d;
}

int main(){

int totalOne=sum(10,12);
cout<<"the sum of two numbers are"<<totalOne<<endl;

int totalTwo=sum(10,30,50);
cout<<"the sum of three numbers are"<<totalTwo<<endl;

int totalThree=sum(106,12);
cout<<"the sum of two numbers are"<<totalThree<<endl;
}