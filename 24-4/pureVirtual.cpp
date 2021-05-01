#include <iostream>
#include <string>
using namespace std;

class student
{
public:
  student()
    virtual void name() = 0;
    virtual void roll_no() = 0;
    virtual void email() = 0;
    virtual void address() = 0;
};
class details : public student
{
public:
   
    void roll_no()
    {
        int roll;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
    }
    void email()
    {
        string em;
        cout <<"Enter the email of the student: ";
        cin >> em;
    }
    void address()
    {
        string adds;
        cout << "Enter the addressof the student: ";
        cin >> adds;
    }
};
int main()
{
    student s;
    details obj1;
    s = &obj1;
    s->name();
    s->roll_no();
    s->email();
    s->address();
}