#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    cout << name << endl;
    name.push_back('@');
    cout << name << endl;
    name.pop_back();
    cout << name << endl;
    cout << name.length() << endl;
    cout << name.capacity() << endl;

    cout << name << endl;
    name.shrink_to_fit();
    cout << name.capacity() << endl;
    /* name.resize(3); */

   

}