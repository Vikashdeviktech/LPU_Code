#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of students in the class";
    cin >> n;
    int studentMarks[n];
    cout << "Enter the marks of the student ";
    for (int i = 0; i < n; i++)
    {
        cin >>studentMarks[i];
    }
    int sum = 0;
    long long prod = 1;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + studentMarks[i];
        prod = prod * studentMarks[i];
    }

    cout << "The sum and product is =" << sum << " " << prod;
}