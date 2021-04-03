#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
{
    string name;
    int rollNumber;
};

int main()
{
    fstream file("details.dat", ios::out | ios::binary);
    if (!file)
    {
        cout << "Unable to open file" << endl;
    }
    else
    {
        int n;
        cout << "Enter the number of the student you want to fill details" << endl;
        cin >> n;
        student str[n];
        cout << "enter the name and roll number of " << n << " students" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i].name;
            cin >> str[i].rollNumber;
        }
        for (int i = 0; i < n; i++)
        {
            file.write((char *)&str[i], sizeof(student));
        }
    }
    file.close();
    if (!file.good())
    {
        cout << "Error occurred at writing time!" << endl;
    }
}