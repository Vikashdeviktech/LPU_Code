#include<iostream>
using namespace std;

int main(){   
   
   int arr[8]={10,40,60,44,22};    // array of size 5   index is 1 less than size  size is 5 then the max index is 4
  

    for(int i=0;i<5;i++)
        cout<<"The "<<i<<" element is "<< arr[i]<<endl;

   cout<<arr[20]<<endl;       // garbage value at 20 index
   cout<<arr[7]<<endl;         


}
