#include<iostream>
using namespace std;

class Time{
    int hrs,min;
    public:
    Time(int,int);
    operator int();

};

Time::Time(int a,int b){
    cout<<"Conversion class type to the basic type "<<endl;
    hrs=a;
    min=b;
}

Time::operator int(){
    cout<<"Conversion from basic to class type "<<endl;
    return (hrs*60+min);
}


int main(){
 
 int h,m,duration;
 cout<<"Enter hours ";
 cin>>h;
 cout<<"Enter the mins ";
 cin>>m;
 Time t(h,m);

 duration=t;

 cout<<"Total min are "<<duration;


 duration=t.operator int();

 cout<<"Total min"<<duration;



}