#include<iostream>
using namespace std;

class Student{
    private:
    int data;
};

int main(){
    Student std;

    int *ptr=(int*)&std;

    *ptr=30;
    cout<<*ptr;
}