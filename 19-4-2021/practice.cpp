#include<iostream>
using namespace std;

class CAR{
public:
void show(){
cout<<"CAR CLASS";
}
};


class CAR1:public CAR{

};
class CAR2:public CAR{

};

class TRUCK:public CAR1,public CAR2{

};

int main(){

TRUCK T;
T.CAR1::show();
T.CAR2::show();
};