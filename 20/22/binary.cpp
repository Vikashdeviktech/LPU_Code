#include<iostream>
using namespace std;

class BoxVolume{

    private:
    double length;
    double height;
    double breath;

    public:
    
    void setLength(double len){
        length=len;
    }

    void setBreath(double bre){
        breath=bre;
    }

    void setHeight(double hei){

        height=hei;
    }
        
double getVolume(){
    return length*breath*height;
}

BoxVolume operator +(BoxVolume& b){   // call be reference   
    BoxVolume box;
    box.length=this->length+b.length;
    box.height=this->height+b.height;
    box.breath=this->breath+b.breath;
  
  return box;

}


};


int main(){

 BoxVolume Box1,Box2,Box3;

Box1.setLength(6.0);
Box1.setBreath(8.0);
Box1.setHeight(9.0);

cout<<"The volume of box 1 is"<<Box1.getVolume()<<endl;

Box2.setLength(16.0);
Box2.setBreath(18.0);
Box2.setHeight(19.0);

cout<<"The volume of box 2 is"<<Box2.getVolume()<<endl;

Box3=Box1+Box2;

cout<<"The volume of box 3 is"<<Box3.getVolume()<<endl;







}