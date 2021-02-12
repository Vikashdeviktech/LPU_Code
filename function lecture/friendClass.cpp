#include<iostream>
#include<string>
using namespace std;

class FriendA{

    private:
     string userName="Vikash";
     string password="99";

    public:
    friend class FriendB;        // friend class
    friend void displayFun(FriendA obj);    // declare a function

};

void displayFun(FriendA obj){     // global function
      cout<<obj.userName<<endl;
       cout<<obj.password<<endl;
}

class FriendB{

 public:       
   void display( FriendA obj){         // parameters of the class A
       cout<<obj.userName<<endl;
       cout<<obj.password<<endl;

   }

   void displayTwo(FriendA obj ){
        cout<<obj.userName<<endl;
       cout<<obj.password<<endl;
   }

};

int main(){
    FriendA objA;
    FriendB  objB;
    objB.display(objA);
    displayFun(objA);
}
