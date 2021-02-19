#include<iostream>
using namespace std;

int main(){
    int n,r,sum=0,temp;                       //  ori=1221           res =1221
   cout<<"enter the number";
    cin>>n;
    temp=n;

    while(n>0){
        r=n%10;            // 1         2               2               1
        sum=(sum*10)+r;   // sum=1      1*10+2=12     12*10+2=122     122*10 +1=1221
        n=n/10;            //  1221/10=122  12         12/10=1        1/10=0

    }
    if(temp==sum)
      cout<<"it is a palindrom";
    else
     cout<<"it is not a palindrom";

}