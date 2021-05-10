// push_back(),push_front(),pop_back(),pop_front(),empty(),size(),at() is not availalbe

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> li;

    li.push_back(10);  //10
    li.push_front(20);  // 20 10
    li.push_back(13); // 20 10 13
    li.push_front(14); // 14 20 10 13

    li.pop_back();  // 14 20 10
    li.pop_front();// 20 10
   
   for(auto i=li.begin();i!=li.end();i++){
       cout<<*i<<" ";
   }
   cout<<endl;

  cout<<"empty"<<li.empty()<<endl;
  cout<<"size"<<li.size()<<endl;


}