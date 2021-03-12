#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream my_file;

    my_file.open("my_file.txt",ios::in);

    if(!my_file){
        cout<<"The file is not created ";
    }
    else{
        cout<<"File exist";
        
        char ch;

        while(true){
            my_file>>ch;
            if(my_file.eof())
               break;
            cout<<ch;

        }

        my_file.close();
    }
}