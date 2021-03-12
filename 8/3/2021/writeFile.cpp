#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream my_file;
    string str;
    my_file.open("vikash2.txt", ios::in);
    if (!my_file)
    {
        cout << "File not created!";
    }
    else
    {

        char ch;
        while (1)
        {
            my_file >> ch;
            if (my_file.eof())
                break;
            cout << ch;
        }
        my_file.close();
    }
    return 0;
}