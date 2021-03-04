#include<iostream>
using namespace std;

class Point{
    private:
    
     const int z;
    public:
    Point(int s=0):z(s){};   // initializer

    void showData(){
    cout<<z;
        
    }
};

int main(){
    Point t1(10);
   t1.showData();
}