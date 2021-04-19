#include <iostream>
using namespace std;
int main()
{

    long MEMORY_SIZE = 0x7fffffff;

    try
    {
        char *ptr = new char[MEMORY_SIZE];

        cout << "Memory is allocated"
             << " Successfully" << endl;
    }

    catch (const bad_alloc &e)
    {

        cout << "Memory Allocation"
             << " is failed: " << e.what() << endl;
    }

    return 0;
}