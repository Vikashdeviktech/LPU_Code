#include<iostream>
#include<string>

using namespace std;

int main(){

    string str,strTwo,strThree;

    getline(cin,str);
  
    cout<<str<<endl;
    
    str.push_back('a');

    cout<<str<<endl;

    str.pop_back();

    cout<<str.capacity()<<endl;   // it give the capacity  of the string  it is decided by the compiler
    cout<<str.length()<<endl;    // length of the string 

    str.resize(4);    // only 4 caharacter will be printed

    cout<<str<<endl;

    str.shrink_to_fit();

     cout<<str.capacity()<<endl;

      iterator:string::iterator itr;   // declaration of the iterator 

     itr=str.begin();           // this is pointing to the first element of the string

     cout<<*itr<<endl;             // this is printing the first element of the string by using pointer

     itr=str.end()-1;             // this is pointing to the last character of the string

     cout<<*itr<<endl;  

     cout<<str[0];     // this will 


}