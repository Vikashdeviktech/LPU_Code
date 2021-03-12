#include<iostream>
#include<fstream>

using namespace std;

int main(){

    fstream myFile("test.txt",ios::in|ios::out|ios::trunc);
    myFile<<"Hello World";

    myFile.seekg(6,ios::beg);

    char A[6];

    myFile.read(A,5);
    A[5]=0;
    cout<<A<<endl;

    myFile.close();
    
    }