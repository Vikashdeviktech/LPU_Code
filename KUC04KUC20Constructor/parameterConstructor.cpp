#include<iostream>
using namespace std;

class Sum{

    private:
    int a,b;
    public:

    Sum(int a1,int b1);
   

    void showData(){
        cout<<a<<" "<<b;
    }

};

Sum::Sum(int a1,int b1)
       {int s;
           cin>>s; 
        a=a1;
        b=b1;
        cout<<a<<" "<<b;
        }
    


int main(){

    Sum obj(10,10);
    obj.showData();

   Sum obj2(29,30);
obj2.showData();


}