#include<iostream>
using namespace std;

class Distance{

    private:
      int x;
      int y;

      public:
      Distance(int x1,int y1){
          x=x1;
          y=y1;
      }

      void Display(){
          cout<<"The value of x and y is"<<x<<" "<<y<<endl;
      }

      Distance operator -(){
          x=-x;
          y=-y;
          return Distance(x,y);
      }

      Distance operator ++(){
          x=++x;
          y=++y;

          return Distance(x,y);
      }

};

int main(){
    Distance D1(-5,10), D2(10,-20),D3(10,11);
    -D1;
    D1.Display();

    -D2;
    D2.Display();
   
   ++D3;
   D3.Display();

    return 0;
}