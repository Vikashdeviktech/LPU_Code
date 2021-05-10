#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> li{10,20,30};  // 10 20 30

    li.push_back(301);  // 10 20 30 301
    li.push_front(11); // 11 10 20 30 301

    cout<<li.empty(); // it will retun false;

    cout<<li.size(); //it will return the size

    li.pop_back(); //11 10 20 30 
    li.pop_front(); // 10 20 30 
}