sir ye code maine banaya h file handling me ios::in me jo character read kare to as it is print kare


but sir isme integer value read nhi kr rha h????

jaise......

Abqari Abbas
LPU
2

ye maine input diya

but sir wo print kr rha h ......

Abqari Abbas
LPU

lekin 2 integer nahi read kr rha h?????

solution bata digiye sir please

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
fstream file;
file.open("myfile.txt",ios::in);
if(!file){
cout<<"file do not exist"<<endl;
} else cout<<"file exist"<<endl;
string ch;
while(true){
getline(file,ch);
if(file.eof()){
break;
} else cout<<endl<<ch;
}
file.close();
}