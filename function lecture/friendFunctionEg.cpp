#include<iostream>
#include<string>
using namespace std;

class FriendA{
    private:

    string userName="vikashadubey";
    string userPassword="999";

    public:
    friend void displayInfo(FriendA obj);


};

void displayInfo(FriendA obj){
  
  cout<<obj.userName<<endl;
  cout<<obj.userPassword<<endl;

}


int main(){
    FriendA obj;
    displayInfo(obj);
   
}