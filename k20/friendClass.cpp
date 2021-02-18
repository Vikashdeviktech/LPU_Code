#include<iostream>
#include<string>
using namespace std;

class FriendA{
  private:
  string userName="Vikash990";
  string userPassword="999";
  
  friend class FriendB;
};

class FriendB{
    public:
    void DisplayInfo(FriendA obj){
        cout<<obj.userName<<endl<<obj.userPassword;
    }
    int sum(int a,int b){
        return a+b;
    }
};

int main(){
    FriendA objA;
    FriendB  objB;
    objB.DisplayInfo(objA);
    cout<<objB.sum(10,30);
}