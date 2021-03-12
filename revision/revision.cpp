#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream my_file("test1.txt",ios::in|ios::out);
my_file << "Hello World"; // insert "Hello World!!" in my_file (test.txt)
// setting pointer to 6th position in file from beggining
my_file.seekg(6,ios::beg);

char A[6];
my_file.read(A,5);
A[5]=0;
cout << A;
my_file.close();
}