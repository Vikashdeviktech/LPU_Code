#include<iostream>
using namespace std;

class Sum{
    public:
    int a,b;

    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void showData(){
        cout<<"The value of a and b is "<<a<<" "<<b<<endl;
    }
};

int main(){

  Sum obj;
  obj.setData(10,20);
  obj.showData();  
}