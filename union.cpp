#include<iostream>
using namespace std;

struct Student{
    char name[40];
    int roll;
    int fees;

};

union StudentUnion{
    char name[40];
    int roll;
    int fees;
};

int main(){
    Student std;
    cout<<sizeof(std.roll)<<endl;
    StudentUnion stdUnion;
    stdUnion.fees=88;
    stdUnion.roll=87;
     cout<<stdUnion.fees<<endl;
    cout<<"the size of structure"<< sizeof(Student)<<endl;
    cout<<"the size of union"<<sizeof(StudentUnion)<<endl;
}