#include<iostream>
using namespace std;

class Sum{

    private:
  
    ~Sum(){
        cout<<"I have also called automatically and i am a destructor";
    }


};

int main(){
    Sum obj;
}