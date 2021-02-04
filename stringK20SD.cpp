#include <iostream>
#include <string>
using namespace std;
int main()
{

    string nameOne, nameTwo;

    cout << "enter the name of the first student" << endl;
    getline(cin, nameTwo);

    cout << "Enter the name of the second student" << endl;

    cin >> nameOne;

    cout << "The name is " << nameOne << endl;
    cout << "The name is " << nameTwo << endl;

    return 0;
}