#include<iostream>
using namespace std;

int main(){
   
   int arr[10]={10,20,133,99,56};     //  declaying an array and assigning value to them
   
                        

  for(int i=0;i<5;i++){

      cout<<arr[i]<<" ";           // this is how we can access an element in the array
  }
  cout<<endl;
   cout<<arr[12]<<endl;    // garbage value is assign when the index>size

   cout<<endl;
   cout<<arr[9]<<endl;      // index<size then 0 is assign by default
}