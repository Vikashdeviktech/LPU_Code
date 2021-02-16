#include<iostream>
using namespace std;
int main()
{
int a=10;
int *ptr1,**ptr2;
ptr1=&a;
ptr2=&ptr1;
cout << a << endl;
cout << " Address in ptr1: " << ptr1 << "Value in this address: " << *ptr1 << endl;
cout << "Address in ptr2: " << ptr2
<< "\nValue/Address in this address(is the address in p1): "<< *ptr2 <<" Value in this address: " <<**ptr2 << endl;
return 0;
}