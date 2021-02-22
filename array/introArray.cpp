#include<iostream>
using namespace std;

int main(){

   int arr[8]={23,45,66,33,22};      // declaration of the array

   for(int i=0;i<=4;i++){
       cout<<arr[i]<<endl;      // accessing the element in the array
   }

  cout<<"the output of the index which is not present in the array";
  cout<<arr[16];      // it will get a garbage value    (array index out of bond)

  cout<<" the output of the element with less size and no vavlue is assign to it";
  cout<<arr[7];


}