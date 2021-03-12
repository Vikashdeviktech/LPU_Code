#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream myresume("test.txt", ios::in | ios::out|ios::trunc);
    cout << "Enter a sentence:" << endl;
    string s;
    getline(cin, s);

    myresume.seekg(8, ios::beg);
    char ch[19];
    myresume.read(ch, 18);
    ch[19] = 0;
    cout << ch << endl;
    myresume.close();
}