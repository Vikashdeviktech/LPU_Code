#include <iostream>
#include <cstdlib>
using namespace std;
class A
{
    int len, bre, area = 0;

public:
    void Area(int len, int bre)
    {
        cout << len * bre;
    }
    void Area(int x,int y,int z)
    {
        cout << x*y*z;
    }
    void Area(int len, float bre)
    {
        cout << len * bre;
    }
};
int main()
{
    A a;
    a.Area(3, 4);
    a.Area(5,6,7);

    return 0;
}

