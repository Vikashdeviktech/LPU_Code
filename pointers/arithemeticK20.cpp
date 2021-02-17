#include<iostream>
using namespace std;

int main(){
   

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *p2;

    p2=&arr[4];
 
    for(int i=5;i>=0;i--){
        cout<<*p2<<endl;
        --p2;
    }
}