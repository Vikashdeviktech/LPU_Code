#include <iostream>
#include <string>
using namespace std;

int main()
{
 
    int studentMarks[10] = {10, 12, 13, 10, 9, 20, 3, -9};            // declaring an array
    cout << studentMarks[0]  << " " << studentMarks[5] << endl;        // accessing an array which is at 0 and 5 index
  
    
     cout<<"eneter the character";
    char a;
    cin>>a;
    cout<<a;
    
    string studentName;                     // declaring an string
    cin>>studentName;                      //   taking input from the user 

    string emailId;
    cin>>emailId;

    cout<<"The name of the student is "<<studentName<<endl;          // printing the whole name
                             

}