#include<iostream>
using namespace std;

class Parent{
public:
int x,y;
Parent(int x1,int y1){
x=x1;
y=y1;
}

};


class Child:public Parent{
int z;

public:
Child(int z1):Parent(10,30){
z=z1;
cout<<x<<y<<z;

}

};

int main(){
Child c1(10);
}