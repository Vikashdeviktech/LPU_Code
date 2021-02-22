#include<iostream>
using namespace std;


void pushZeroToLast(int arr[],int n){

    int count=0,i;

    for( i=0;i<n;i++){
       { if(arr[i]!=0)
           arr[count++]=arr[i];

       }
    }
    while(count<n)
      arr[count++]=0;
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    pushZeroToLast(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}