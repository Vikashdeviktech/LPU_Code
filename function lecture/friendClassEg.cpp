#include<iostream>
#include<string>
using namespace std;

class FriendA{
    private:
    string userName="vikashadubey";
    string userPassword="999";

    public:
    friend class FriendB;


};

class FriendB{
    public:
    void displayInfo( FriendA obj){                        //  int a

    cout<<obj.userName<<endl;
    cout<<obj.userPassword<<endl;

    }

};

int main(){
    FriendA obj;
    FriendB obj1;
    obj1.displayInfo(obj);
}