#include <iostream>
#include <string>
using namespace std;

class FriendA
{

private:
    string userName = "vikash990";
    string userPassword = "993132";

public:
    int sum(int a,int b);
    friend void displayStudentDetails(FriendA obj); // function is a friend
    friend class FriendB;    
                           // class is becoming friend
};

void displayStudentDetails(FriendA obj)          // Friend obj=objA     just like int a=10
{
    cout << "The details of student using function is " << obj.userName << obj.userPassword << endl;
}

class FriendB
{
public:
    void printStudentData(FriendA obj)
    {
        cout << "The student details are " << obj.userName << " " << obj.userPassword;
    }
    friend class FriendC;
};

int main()
{
    FriendA objA;
  
    FriendB objB;
    objA.sum(10,20);
    displayStudentDetails(objA);
    objB.printStudentData(objA);
}