#include<iostream>
using namespace std;

class Student{

    public:
      int x=10;
     Student(){
         cout<<"I have been called automatically i am a constructor"<<endl;
     }
     ~Student(){    // this is the destructor 
      cout<<"I have also been called automatically i am a destructor";
     }

     void show(){
         cout<<x;
     }


};
int main()
{



Student obj;

obj.show();

}