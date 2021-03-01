#include <iostream>
#include <string>
#include<iterator>
using namespace std;

int main()
{   
    
    
    string str = "vikash", str2, str3,strNew="Vikash Dubey" ;
    char arr[80];

   /*  getline(cin, str3);
    cout << "The output using getline " << str3 << endl; */
/* 
    cin >> str2;
    cout << " The output using cin " << str2 << endl; */

    str.push_back('@');

    cout<<str<<endl;

    str.pop_back();

    cout<<str<<endl;

    cout<<"The length of the string is "<<str.length()<<endl;

    cout<<"The capacity of the string is "<<str.capacity()<<endl;

    str.shrink_to_fit();

     cout<<"The capacity of the string is "<<str.capacity()<<endl;

     str.resize(5);

     cout<<str<<endl;
   
    iterator:string::iterator itr,itr2;
    
     itr2=strNew.end()-1;

     cout<<*itr2<<endl;

     for(itr=strNew.begin();itr!=strNew.end();itr++)
        cout<<*itr<<endl;

    strNew.copy(arr, 20,2);
    cout<<arr<<endl;


    
}