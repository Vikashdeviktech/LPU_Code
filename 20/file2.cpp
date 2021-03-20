#include <iostream>
#include <fstream>
using namespace std;

int main()

{
    fstream myFile("test.txt", ios::in | ios::out | ios::trunc);
    myFile << "Hi i am a fullstack developer";

    myFile.seekg(7, ios::cur);  // 5 means skip 5 caharcter
    char A[20];
    myFile.read(A, 20);   // 20 read 20 caharcter starting from the 5th position
    cout << A << endl;
    myFile.close();
}