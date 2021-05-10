#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    vector<int>::iterator i;

    for(i=v.begin();i!=v.end();i++){
        cout<<*i;
    }



    
}