#include<iostream>
using namespace std;

int sum(int x,int y){   // declare and define of the function
     int s;
     s=x+y;
    return s;            // return of the function
}

int main(){
   
   cout<<sum(5,10)<<endl;   // calling of a function
   cout<<sum(10,20)<<endl;

}