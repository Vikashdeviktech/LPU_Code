#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    
    cout<<" enter the elements in th array";

    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
    int sum=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<" the sum of the elements in th array is"<<sum;


}