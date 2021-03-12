#include<iostream>
#include<string>
using namespace std;

class Student{

    private:
     int a,b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void showData(){
        cout<<"the value of a and b is "<<a<<" "<<b;
    }
};

int main(){
    Student obj;
    obj.setData(10,20);
    obj.showData();
}