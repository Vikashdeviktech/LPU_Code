#include<iostream>
using namespace std;

int sum(int a,int b){
      return a+b;
}

int sum(int a,int b,int c){
      return a+b+c;
}

int sum(int a,int b,int c,int d){
    return a+b+c+d;

}

int main()
{
    int a=10,b=20,c=30,d=40;
       
    
    cout<<sum(a,b)<<endl;            // sum(10,20)=10
    cout<<sum(a,b,c)<<endl; 
    cout<<sum(a,b,c)<<endl;
}