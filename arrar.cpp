#include <iostream>
using namespace std;

class student
{

public:
    int rollNonStatic;
    static int rollStatic;
};

int student::rollStatic; //static member func declare outside the class.

int main()

{

    student objone;
    objone.rollNonStatic = 77;

    cout << ++objone.rollNonStatic << " "<< ++objone.rollStatic << endl;

     student objtwo;

    objtwo.rollNonStatic = 55;

    cout << ++objtwo.rollNonStatic <<" "<< ++objtwo.rollStatic; //static member print the updated value

    return 0;
}