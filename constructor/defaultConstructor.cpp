#include<iostream>
using namespace std;

class Sum{

    public:
     int a,b;     // data members 

     Sum(){      // constructor helps us to initalize the value of the data members of the class

     a=20;
     b=25;
     }

};

int main(){
    Sum sumObj;
    cout<<sumObj.a<<" "<<sumObj.b;
}