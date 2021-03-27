#include <iostream>
using namespace std;

class distancee
{
private:
    int x, y;

public:
    distancee(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void display()
    {
        cout << "the value of x and y is " << x << " " << y << endl;
    }
    distancee operator ++ ()
    {
        x = ++x;
        y = ++y;
        return distancee(x, y);
    }
};
int main()
{
    distancee d1(2, 3), d2(11, 45);
    ++d1;
    d1.display();
    ++d2;
    d2.display();
}