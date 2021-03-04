#include<iostream>
using namespace std;

void even(int numOne,int numTwo){
    if(numOne>numTwo)
       return;
      cout<<numOne<<endl;
            even(numOne+2,numTwo);
    

  
}

int main(){
    int numOne,numTwo;
    cin>>numOne>>numTwo;
     if(numOne%2==0){
         numOne=numOne;
     }
     else
       numOne=numOne+1;
    even(numOne,numTwo);     // 3 17

}