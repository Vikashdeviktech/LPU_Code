#include<iostream>
using namespace std;

class Parent{
  
  public:
   int  x;
  Parent(int i){
      x=i;
    cout<<"Inside the base class";
  }
};
class Child:public Parent{
    public:

    Child(int x):Parent(x){
        cout<<"I am inside the child  class";
    }

};

int main(){
    Child c1(10);
}