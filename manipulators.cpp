#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, givennumber;
    cout << "Enter the Number= ";
    cin >> n;
    givennumber = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (givennumber == sum)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong Number" << endl;
}