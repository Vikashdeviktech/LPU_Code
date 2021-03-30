#include<iostream>
using namespace std;

class Dist{
    public:

    int x,y;

    Dist(){
        this->x=0;
        this->y=0;
    }

    Dist(int x1,int y1){
        this->x=x1;
        this->y=y1;
    }

    friend Dist operator + (Dist&,Dist&);     // 
};

Dist operator + (Dist &d1,Dist &d2){     // call by reference 
    Dist d3;
    d3.x=d1.x+d2.x;
    d3.y=d1.y+d2.y;
    return d3;
}


int main(){
    Dist d1(10,20);
    Dist d2(20,30);

Dist d3;

d3=d1+d2;

cout<<"The value of x and y is "<<d3.x<<" "<<d3.y<<endl;
}