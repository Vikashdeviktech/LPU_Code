#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string userName;
    string userPass;
public:

    Student(string userNameNew, string userPassNew)    // constructor is a function with the same name of the class
    {                                          // it is used to assing the value of the class data memebr
        userName = userNameNew;
        userPass = userPassNew;
    }
    /*  void getData(string userNameNew, string userPassNew)
    {
        userName = userNameNew;
        userPass = userPassNew;
    } */

    void showdata()
    {
        cout << "The details of the student are " << userName << " " << userPass << endl;
    }
};

int main()
{

    Student obj("vikash","999");   // contsructor is called automatically when the object is declare
    /*  obj.getData("vikash","999"); */
    obj.showdata();
}