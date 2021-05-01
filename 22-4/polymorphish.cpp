#include <iostream>
using namespace std;

class Sum
{
private:
    int x, y, z;

public:
    Sum(int a, int b, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }

    void  Add(int a, int b)
    {
        cout<<a+b<<endl;
        
    }

    void Add(int a,int b,int c){
        cout<<a+b+c;
    }
};
int main()
{
    Sum s1(23, 46,30);
    s1.Add(23, 46);
    s1.Add(2, 56, 8);
}