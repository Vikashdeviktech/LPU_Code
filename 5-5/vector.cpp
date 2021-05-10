// insert,delete,size,capacity,front,last,at,empty

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v1;

    v1.push_back(10);      // 10,30,9,44
    v1.push_back(30);
    v1.push_back(9);     //  string
    v1.push_back(44);
    v1.push_back(30);
    v1.push_back(9);     //  string
    v1.push_back(44);

    for(auto i=v1.begin();i!=v1.end();++i){
        cout<<*i<<" ";
    }
   cout<<endl;
    v1.pop_back()<<endl;   // it will delete the element from the last 10 30 9
    cout<<"The size of the element is "<<v1.size()<<endl;  // size
    cout<<v1.capacity()<<endl;  // capacity

      for(auto i=v1.begin();i!=v1.end();++i){
        cout<<*i<<" ";
    }

    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.empty()<<endl;

    cout<<v1.at(2);

    

  
}