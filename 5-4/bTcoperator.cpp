#include<iostream>
using namespace std;

class Time{
    private:
     int hrs,min;
    public:
     void display();
     void operator = (int);     // overloading function
};

void Time::display(){
    cout<<hrs<<" "<<min<<endl;
}

void Time::operator=(int t){
    cout<<"Basic type to the class type "<<endl;
    hrs=t/60;
    min=t%60;
}

int main(){
    Time t1;
    int duration;
    cin>>duration;
    t1.operator=(duration);
    t1.display();
}