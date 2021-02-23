#include<iostream>
using namespace std;

 void leftRotation(int arr[],int n){
    
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;                        // 5   arr[4]

 }

 void printElement(int arr[],int n){
     for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
 }

void nTimeRotate(int arr[],int d,int n){
    for(int i=0;i<d;i++){
        leftRotation(arr,n);
    }
}

int main(){

  int n,d;                   // n is the size of array
  cin>>n>>d;
  int arr[n];             // user has eneterd the 5 so the size of the array will be arr[5]
  
  for(int i=0;i<n;i++)    // this will take the value from the user
    cin>>arr[i];

  nTimeRotate(arr,d,n);
  printElement(arr,n);

 

}