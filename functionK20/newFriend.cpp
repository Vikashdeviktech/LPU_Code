#include <iostream>
using namespace std;
class student
{

private:
    int rollnumber;
    int total_marks;

public:
    void setdata(void);
    void getdta(void)
    {
        cout << "the rollnumber of the student is "
             << "=" << rollnumber << endl;
    }
    friend class result;
};

void student::setdata()
{
    cout << "enter the roll number of the student"
         << "=";
    cin >> rollnumber;
    cout << "enter the total maarks of the student"
         << "=";
    cin >> total_marks;
}

class result
{
public:
    int percentage;
    void putdata(student obj)
    {
        percentage = obj.total_marks / 5;
    }
    void display(void)
    {
        cout << "you percentage is " << percentage << "%" << endl;
        if (percentage >= 35)
        {
            cout << "you are passed" << endl;
        }
        else
        {
            cout << "you are not passed in the examination" << endl;
        }
    }
};

int main()
{
    student s1;
    s1.setdata();
    result r1;
    r1.putdata(s1);
    s1.getdta();
    r1.display();

    return 0;
}
