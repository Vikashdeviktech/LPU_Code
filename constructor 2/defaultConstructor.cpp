#include<iostream>
using namespace std;

class Sum{
    public:
    int x,y,z,w;

    Sum(int x1,int y1,int z1,int w1=0)
     {
         x=x1;
         y=y1;
         z=z1;
         w=w1;

         cout<<x+y+z+w;
     }
};

int main(){
    Sum obj(10,20,30);
    

}