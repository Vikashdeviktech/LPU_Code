#include <iostream>
using namespace std;

int main()
{              // 1024 1028 1032 1036 1
    int arr[5] = {1, 2, 3, 4, 5};
    int *pt;
    pt=&arr[4]; //   or pt=&arr[0]   address of the array

    for (int i =4 ; i >=0 ; i--)
    {
        cout << *pt << endl;
        --pt;
    }
}