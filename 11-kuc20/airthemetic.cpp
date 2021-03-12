#include <iostream>
using namespace std;

int main(){
int arr[5] = {10,20,30,40,50};

int *p;

p = &arr[5]; //pointing the base address of the arr

/*p is a pointer that is pointing to the
arr it means the first block of the array*/

for (int i=4;i>=0;i--){
cout<<*p<<" ";
--p;
}
}