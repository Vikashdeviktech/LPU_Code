#include<iostream>
using namespace std;

int main(){
    int a,b;
     cin>>a>>b;
   try{
       if(b==0)
           throw "Denominator can't be 0";
        cout<<a/b<<endl;

   }catch(const char *error){
       cout<<error;
   }


}