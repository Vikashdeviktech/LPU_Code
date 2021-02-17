#include<iostream>
using namespace std;

void NaturalNum(int n){

    if(n==100)                     // base condition where the recursion will stop
      return;
    else 
    {   cout<<n<<endl;
        NaturalNum(n+1 );                // increment same as loop
    }
}

int sumNatural(int n){
    if(n==100)
      return 0;
    else 
      return n+sumNatural(n+1);
}

int main(){

    NaturalNum(21);                  // calling
    cout<<"the sum of natural number"<<sumNatural(21);

}