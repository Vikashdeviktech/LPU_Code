#include<iostream>
using namespace std;

class Person{
    public:
    static int age;
    int fees =9999;

    static void displayInfo(){     // in static function we can write only static data memebrs
      cout<<"the details for the student are "<<age;  
    }
};
int Person:: age=66;

int main(){
    Person objOne;
    
    cout<<++objOne.fees<<" "<<++objOne.age<<endl;

    Person objTwo;
    cout<<objTwo.fees<<" "<<objTwo.age;

}