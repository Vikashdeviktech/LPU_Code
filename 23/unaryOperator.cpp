#include<iostream>
using namespace std;

class Dist{
    private:
     int x,y;
    public:
     Dist( int x,int y){
         this->x=x;
         this->y=y;
     }

     void Display(){
         cout<<"The value of x and y is"<<x<<" "<<y<<endl;
     }

     Dist operator -(){
         x=-x;
         y=-y;
         return Dist(x,y);
     }

     Dist operator ++(){
         x=++x;
         y=++y;
         return Dist(x,y);
     }
};

int main(){
    Dist D1(11,10),D2(12,-20);
    
    -D1;
    D1.Display();
    ++D1;
    D1.Display();

    -D2;
    D2.Display();
    ++D2;
    D2.Display();







}