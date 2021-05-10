// push_back(),pop_back(),size(),capacity(),at(),clear(),empty()
#include<iostream>
#include<vector>   // stl
using namespace std;

int main(){
   vector<int> v1;
    v1.push_back(10);  // push_back is used to insert the element
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);   // 10 11 12 13
                        // pop back is used to delete the element
    v1.pop_back();      // 10 11 12
    v1.pop_back();       // 10 11

    for(auto i=v1.begin(); i!=v1.end();i++){   // beging point the first element and end point the last element
       cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"size of the element"<<v1.size()<<endl;
    cout<<"capacity"<<v1.capacity()<<endl;

    cout<<"at functio"<<v1.at(1)<<endl;

    cout<<" empty function"<<v1.empty()<<endl;

      v1.clear();
    
    
}