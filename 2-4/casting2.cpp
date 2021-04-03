#include<iostream>
using namespace std;

class mins{

int hours,minutes,seconds;
public:
mins(int);
void display();
};

mins::mins(int m){

hours=m/60;
minutes=(m%60)/30;
seconds=(m%60)%30;
};

void mins::display(){

cout<<hours<<":hours(s)"<<endl;
cout<<minutes<<":minutes"<<endl;
cout<<seconds<<":seconds"<<endl;

};

int main(){
int m;
cout<<"enter the no of minutes";
cin>>m;

mins m1=m;
m1.display();
return 0;
