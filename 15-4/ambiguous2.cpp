#include<iostream>
using namespace std;

class A{
    public:

    void show(){
        cout<<"Hello world";
    }
};

class B:public virtual A{
   public:
   void newShow(){
       cout<<" hi";
   }



};
class C:virtual public  A{
    public:
    


};

class D:public B,public C{

};

int main(){

  D d1;
  d1.show();
   



}
