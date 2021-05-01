#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    cout << "The number is ";
    try
    {
        if (b == 0)
        {
            throw "Divison by zero is not possible";
        }
        else
        {
            int d = a / b;
            cout << d;
        }
    }catch(const char* error){
        cout<<error<<endl;
    }
}