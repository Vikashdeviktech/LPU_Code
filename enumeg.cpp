#include<iostream>
using namespace std;

enum Direction{ east,west=5,north,south};   // east=0, north=6,south=7

int main(){

    Direction dirOne,dirTwo,dirThree;
    dirOne=north;
    dirTwo=east;
    dirThree=south;
    cout<<dirOne<<" "<<dirTwo<<" "<<dirThree;

}