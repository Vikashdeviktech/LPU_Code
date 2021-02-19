#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string userName;
    string userPass;
public:
     void getData(string userName, string userPass)
    {
        this->userName = userName;
        this->userPass = userPass;
    }

    void showdata()
    {
        cout << "The details of the student are " << userName << " " << userPass << endl;
    }
};

int main()
{

    Student obj;  
    obj.getData("vikash","999");
    obj.showdata();
}