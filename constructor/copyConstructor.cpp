#include<iostream>
using namespace std;

class Sum{
    public:
     int x,y,z;

     Sum(int x1,int y1,int z1){
         x=x1;
         y=y1;
         z=z1;
     }

};

int main(){
    Sum obj1(10,20,30);
    cout<<obj1.x<<" "<<obj1.y<<" "<<obj1.z<<endl;

    Sum obj2=obj1;      // copy constructor(assigining the value to the another object of the same class) 
  cout<<obj2.x<<" "<<obj2.y<<" "<<obj2.z<<endl;
}