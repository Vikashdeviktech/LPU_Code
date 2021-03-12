#include <iostream>
#include <fstream>  // this is the library
using namespace std;

int main()
{

    fstream my_file;    //    nameOfClass obj

    my_file.open("my_file.txt", ios::out);  // open is used to open a file

    if (!my_file)
    {
        cout << "file is not created";
    }
    else
    {
        cout << "File is created";
        
        my_file.close();
    }
}