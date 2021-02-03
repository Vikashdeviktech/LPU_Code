#include<iostream>
using namespace std;

int main(){  
     int n,s;   // n and s are global scope
     bool l=true;
     bool s=false; 

     cout<<"Take the input from the user"<<"\n";   // \n is
     cin>>n>>s;       // it is used for taking input form the user it is same as scanf()
     cout<<n<<" "<<s<<endl;   // endl is used for next line
    cout<<"hello world";    // it is same as printf() it is used for dispalying output on the screen

    
    for(int i=0;i<n;i++){   // i is having local scope 
        cout<<i;
    }
  
}