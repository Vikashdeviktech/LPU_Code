#include<iostream>
using namespace std;

class Sum{
    private:
      int a,b;
    public:
    int s,t;
     void setData(int a,int b){
         this->a=a;   // arrow symbol  . 
         this->b=b;
     }

     void showData(){
         cout<<"The value of a and b is"<<a<<" "<<b<<endl;
     }

     void showData2(){
         cout<<s <<" "<<t<<endl;
     }
};

int main(){
    Sum obj;
    Sum *ptr;
    ptr=&obj;
    ptr->s=20;
    ptr->t=30;
    ptr->showData2();
    obj.setData(10,20);
    obj.showData();
}
