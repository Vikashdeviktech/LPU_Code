#include<iostream>
using namespace std;

class Distance{
    public:
    int feet,inch;

    Distance(){
        this->feet=0;
        this->inch=0;
    }

    Distance(int feet,int inch){
        this->feet=feet;
        this->inch=inch;

    }
    friend Distance operator + (Distance&,Distance&);  // frien function
};

Distance operator+(Distance &d1,Distance &d2){   // 
    Distance d3;
    d3.feet=d1.feet+d2.feet;
    d3.inch=d1.inch+d2.inch;
    return d3;
}


int main(){
    Distance dd110,8);
    Distance dd2(9,7);

    Distance d3;

    d3=dd1+dd2;

    cout<<"The total feet and inch are "<<d3.feet<<" "<<d3.inch;

}