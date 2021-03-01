#include <iostream>
using namespace std;

class Sum
{

public:
    int a, b, c;

    Sum()       // default constructor
    {
        a = 20;
        b = 30;
        c = 50;
    }

    Sum(int a, int b, int c)   // parameterize constructor
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void showData()
    {
        cout << "The sum of the numbe a,b and c is " << a + b + c<<endl;
    }
};

int main()
{
    Sum sumObj(10, 20, 30);
    Sum sumObj2;
    cout<<"This is parameterize constructor"<<endl;
    sumObj.showData();
    cout<<"This is default constructor"<<endl;
    sumObj2.showData();
}