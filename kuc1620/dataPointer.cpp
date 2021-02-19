#include <iostream>
using namespace std;

class Data
{

public:
    int a;

    void displayInfo()
    {
        cout << " the value of a is " << a << endl;
    }
};

int main()
{

    Data obj, *objP;
    objP = &obj;
    int Data ::*ptr = &Data::a;
    obj.*ptr = 30;
    cout << obj.a;
    objP->a = 55;
    objP->displayInfo();
}
