#include<iostream>
using namespace std;

void leftRotation(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
     { arr[i]=arr[i+1];
     }
    arr[n-1]=temp;
}

void nleftRotation(int arr[],int d,int n){
    for(int i=0;i<d;i++){
        leftRotation(arr,n);
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}

int main(){

   int n,d;        
   cin>>n>>d;      
   int arr[n];      // if n=10  then the size of the array is arr[10]

   for(int i=0;i<n;i++)
      cin>>arr[i];     // taking input from the user
 
   nleftRotation(arr,d,n);
   printArray(arr,n);


}