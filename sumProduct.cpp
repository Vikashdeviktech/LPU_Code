#include<iostream>
using namespace std;

int main(){
   
   int arr[5]={10,2,44,22,1};
   int sum=0;
   int product=1;

   for(int i=0;i<5;i++){
       sum=sum+arr[i];                      //  sum=0+10=10
                                             // sum=10+2=12,     sum=12+44    
       product=product*arr[i];
   }

 cout<<"Sum = "<<sum<<" "<<"Product ="<<product;
}