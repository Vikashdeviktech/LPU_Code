#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct Student{
    int roll_no;
    string name;
};

int main(){
    ofstream wf("student.dat",ios::out|ios::binary);
    if(!wf){
        cout<<"Cannot open the file";
        return 1;
    }

    Student wstu[2];
    wstu[0].roll_no=1;
    wstu[0].name="Vikash";
    wstu[1].name="Sham";
    wstu[1].roll_no=55;

    for(int i=0;i<2;i++){
        wf.write((char *) &wstu[i],sizeof(Student));
    }
    wf.close();

   if(!wf.good()){
       cout<<"Unable to open the file"<<endl;
       return 1;
   }


}