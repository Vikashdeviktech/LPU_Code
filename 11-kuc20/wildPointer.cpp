#include<iostream>
using namespace std;

int main(){
    int *p=NULL;  // it is a wild pointer because we have not given adress 
           // uninitalize pointer are wild poiner
      // now p is not a wild pointer
    cout<<p;
}  