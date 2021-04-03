#include<iostream>
using namespace std;

class Year{
    private:
    int yrs,days;
    public:
    Year(int);
    void display();

};                              //1000

Year::Year(int d){
    cout<<"Basic Type to the class type==>type conversion"<<endl;
    yrs=d/365;
    days=d%365;
}

void Year::display(){
    cout<<"The year and days are "<<yrs<<" "<<days;
}

int main(){
    int dt;
    cout<<"Enter the days "<<endl;
   cin>>dt;
Year y1=dt;   //  
y1.display();



}