#include <iostream>
using namespace std;
int main()
{
int *a;
a = new int[2];
a[0] = 1;
a[1] = 1;

for (int i = 0; i < 2; i++)
{
cout << a[i] << " ";
}

delete[] a;   // deleting an array
for (int i = 0; i < 2; i++)
{
cout << a[i] << " ";
}
return 0;
}