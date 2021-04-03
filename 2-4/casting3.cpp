#include<iostream>
using namespace std;

class Time{
    private:
     int hrs,min;
    public:
     Time(int,int);
     operator int();
};

Time::Time(int a,int b){
    hrs=a;
    min=b;
}
Time::operator int(){
    return(hrs*60+min);
}

int main(){
    int h,m,duration;
    cout<<"Enter Hours";
    cin>>h;
    cout<<"Enter Minutes";
    cin>>m;
    Time t(h,m);

    duration=t;   // casting conversion 
    cout<<"The total minutes are "<<duration<<endl;
    duration=t.operator int();
    cout<<"The total minutes are "<<duration<<endl;
}