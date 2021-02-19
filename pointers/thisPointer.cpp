#include<iostream>
using namespace std;

class Sample{
  public:
    int a,b,c, d;

    Sample(int c1,int d1){
        c=c1;
        d=d1;

        cout<<c<<endl<<d;
        
    }

    void getData(int a,int b){

        this->a=a;
        this->b=b;

    }
    
    void showData(){
        cout<<"The value for a and b are "<<a <<endl<< b<<endl;
    }
};

int main(){
    Sample obj(10,30);
    obj.getData(10,20);
    obj.showData();

}