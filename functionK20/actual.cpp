#include<iostream>
using namespace std;

void changebyAddress(int *countAddress){    // call by addresss 6 6
  ++(*countAddress);
  cout<<" the count value using call by value"<<*countAddress<<endl;
}

void changebyReference(int &countReference){    // call by reference 6 6
  ++countReference;
  cout<<" the count value using call by value"<<countReference<<endl;
}

void changebyValue(int &countvalue){    // call by value output 6 5
  ++countvalue;
  cout<<" the count value using call by value"<<countvalue<<endl;
}

int main(){
    int countAddress=5,countValue=5,countReference=5;
    changebyValue(countValue);
    changebyReference(countReference);
    changebyAddress(countReference);
    cout<<" the value of count inside the main function"<<countValue;
    cout<<" the value of count inside the main function"<<countAddress;
    cout<<" the value of count inside the main function"<<countReference;

}