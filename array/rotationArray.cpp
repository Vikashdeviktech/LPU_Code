#include<iostream>
using namespace std;

void arrayLeftRotation(int arr[],int n){

    int temp=arr[0];
    for( int i=0;i<n-1;i++){
         arr[i]=arr[i+1];
    }   
    arr[n-1]=temp;                                        //   3 4 5 6 7 8
}

void arrayRotation(int arr[],int d,int n){
    for(int i=0;i<d;i++){
        arrayLeftRotation(arr,n);
    }

    
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}

int main(){
  
  int n,d;         // declare the size of array
  cin>>n>>d;
  int arr[n];       // we have declare an array of n size   arr[10]

  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  arrayRotation(arr,d,n);


  printArray(arr,n);


}