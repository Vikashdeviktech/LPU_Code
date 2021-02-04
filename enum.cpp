#include<iostream>
using namespace std;



int main(){
    enum direction { east=3,west,north,south};
    direction dirOne,dirTwo;
    dirOne=north;
    dirTwo=east;
    cout<<dirOne<<endl;
    cout<<dirTwo<<endl;
}
