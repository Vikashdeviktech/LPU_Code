#include <iostream>
using namespace std;

class A
{
private:
    int x, y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
    }
};
int main()
{

    try
    {
       
        try{
        A a;
       
        }catch{
          throw "error";
        }


    }
    catch (const char *error)
    {
        cout << error;
    }
    return 0;
}