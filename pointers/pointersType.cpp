#include<iostream>
using namespace std;

int main(){
    
    int *ptr,*ptr2=NULL;   // wild pointer because we have use it but we have not assign any value to this
                           // ptr2 is a null pointer it is not storing any address
    int a=10;

    ptr=&a;  // ptr is not a wild pointer 

    cout<<ptr <<" "<<ptr2;

}