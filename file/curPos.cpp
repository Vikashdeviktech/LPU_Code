#include<iostream>
#include<fstream>
using namespace std;

int main(){

fstream st;
st.open("new.txt",ios::out);
if(!st){
    cout<<"File is not created";
}
else{
    cout<<"New file created"<<endl;
    st<<"Hello Everone";
    cout<<"File Pointer position is "<<st.tellp()<<endl;

    st
}

}
