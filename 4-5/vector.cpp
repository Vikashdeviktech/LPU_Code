#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> g1;

    g1.push_back(10);   // push_back insert the element in the vector 
    g1.push_back(30);
    g1.push_back(40);
    g1.push_back(50);

    for(auto i=g1.begin();i!=g1.end();++i){
        cout<<*i<<" ";
    }
    cout<<endl;

    g1.pop_back();
     for(auto i=g1.begin();i!=g1.end();++i){
        cout<<*i<<" ";
    }
     cout<<endl;
    cout<<"the size of the element are"<<g1.size()<<endl;
    cout<<"The capacity is "<<g1.capacity();

    

}