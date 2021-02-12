#include <iostream>
using namespace std;

int recurseName(int n,string name)
{
    
    if (n > 5)
        return 1;
    cout << name << endl;
    n++;
    return recurseName(n,name);
}
int main()
{
    recurseName(5,"Suraj Singh");
    return 0;
}