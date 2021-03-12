#include<iostream>
using namespace std;

class Sum{

    private:
     int x,y,z,w;
    public:
    Sum(int x1=1,int y1=1,int z1=1,int w1=1){
        x=x1;
        y=y1;
        z=z1;
        w=w1;
    }
   
   void Show(){
   cout<<x+y+z+w<<endl;
   }

};

int main(){
   
   Sum obj1(20,30);
   Sum obj2(20,30,40);
   Sum obj3(20,30,40,50);
  /*  Sum obj4(20,30,40,50,60);  // error  */

   obj1.Show();
   obj2.Show();
   obj3.Show();









}
