#include <iostream>
using namespace std;

class A
{
public:
    virtual void sum(int a, int b)=0;
   

    void product(int x, int y)
    {
        cout << "base" << endl;
        cout << x * y << endl;
    }
};

class B : public A
{
public:
    void sum(int a, int b)
    {
        cout << "child" << endl;
        cout << a + b << endl;
    }

    virtual void product(int x, int y)
    {
        cout << "child" << endl;
        cout << x * y << endl;
    }
};

int main()
{
    /* B b1,b2;
b1.print();
b1.show(); */

    A *a1;
    B b2;
    a1 = &b2;

    a1->sum(10, 40);
    a1->product(3, 7);
}