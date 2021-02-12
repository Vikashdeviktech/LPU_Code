#include <iostream>
using namespace std;

class Student
{

public:
    int rollNonStatic = 99;
    static int rollStatic;

    static void display(){
        cout<<rollStatic<<" "<<rollNonStatic<<" ";
    }
};

int Student::rollStatic = 10; // initalize the static outside the class

int main()
{

    Student objOne;

    cout << ++objOne.rollNonStatic << " " << ++objOne.rollStatic << endl;   //100 11

    Student objTwo;

    cout << objOne.rollNonStatic << " " << objOne.rollStatic;     // 99 11
}