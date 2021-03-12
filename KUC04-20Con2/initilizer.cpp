#include<iostream>
using namespace std;

class Sum{
    public:
     const int x,y;
    
  /*   Sum(int i,int j){
        x=i;
        y=j;
    } */
    Sum(int i,int j):x(i),y(j){};   // this is a initalizer

    void showData(){
        cout<<x<<" "<<y<<endl;
    }

};

int main(){

    Sum obj(10,30);
    obj.showData();

}