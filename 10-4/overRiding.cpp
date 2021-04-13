#include<iostream>
using namespace std;
class A{
public:
int a=10, b=2;

b

void display(){

cout<<c<<endl;}
};
class B:public A
{
public:
void display()
{
int c=60;
cout<<c<<endl;
}
};
int main()
{
B obj;
obj.display();
return 0;
}