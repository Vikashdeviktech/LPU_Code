#include<iostream>
using namespace std;

class Time
{
    int hrs,min;
    public:
     Time(int,int);
     operator int();
};
Time::Time(int a,int b){
    cout<<"Class type to the basic type"<<endl;
    hrs=a;
    min=b;
}



int main(){

 int h,m,duration;
 cout<<"Enter Hours "<<endl;
 cin>>h;
 cout<<"Enter Minutes "<<endl;
 cin>>m;

 Time t(h,m); // constructor

 duration=t;   // casting conversion duration =int(t)
cout<<"Total minutes are "<<duration<<endl;



return 0;


}

