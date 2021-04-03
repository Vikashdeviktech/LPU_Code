#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
fstream file1;
file1.open("my_file3.txt",ios::in);
if(!file1)
{
cout<<"File not created"<<endl;
}
else{
char ch;
while(1)
{
file1>>ch;
if(file1.eof())
break;
cout<<ch;
}

}
file1.close();
return 0;

}