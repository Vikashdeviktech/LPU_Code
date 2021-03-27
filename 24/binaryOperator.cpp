#include<iostream>
using namespace std;

class Box{
    private:
     double length,breath,height;

    public:
      void setLength(int len){
          length=len;
      }

      void setBreath(int bre){
          breath=bre;
      }

      void setHeight(int hei){
          height=hei;
      }

      double getVolume(){
          return length*breath*height;
      }    

      Box operator + (Box &b,Box &c1){  
      
          Box box;
          box.length=this->length+c1.length+b.length;
          box.height=this->height+c1.height+b.height;
          box.breath=this->breadth+c1.breath+b.breath;
          return box;
      }

};

int main(){
    Box box1,box2,box3,box0;
     box0.setLength(10.0);
    box0.setHeight(11.0);                             
    box0.setBreath(9.0);

    box1.setLength(10.0);
    box1.setHeight(11.0);                             
    box1.setBreath(9.0);
  
  cout<<"The volume of box1 is "<<box1.getVolume()<<endl;

  box2.setLength(11.0);
  box2.setHeight(7.0);
  box2.setBreath(3.0);

  cout<<"The volume of box2 is "<<box2.getVolume()<<endl;

  box3=box0+box1+box2;

  cout<<"The volume of box 3 is "<<box3.getVolume();

}

