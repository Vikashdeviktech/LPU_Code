#include <iostream>
using namespace std;

int main()
{
    int b;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "enter the index number" << endl;
    cin >> b;
    try
    {
        cout<<sizeof(a)/sizeof(a[0]);
        if (b > 9)
            throw "out of bound";
        else
            cout << a[b];
        cout<<(sizeof(a) - 1);
    }
    catch (const char *error)
    {
        cout << error << endl;
    }
}