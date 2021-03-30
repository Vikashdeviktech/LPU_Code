#include <iostream>
using namespace std;

class Time{

    private:
     int hrs,min;
     public:
      Time(int);
      void display();
};

Time::Time(int t){
    cout<<"Basic Type to ==> class Type conversion..."<<endl;
    hrs=t/60;
    min=t%60;
}

void Time:: display(){
    cout<<hrs<<endl;
    cout<<min<<endl;
}

int main(){

  int duration;
  cout<<"Enter time duration in minutes ";
  cin>>duration;
  Time t1=duration;

  t1.display();



}