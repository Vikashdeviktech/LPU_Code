#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    list<int> v1;

    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);
     v1.push_back(101);
    v1.push_back(111);
    v1.push_back(121);
    v1.push_back(1);

  v1.sort();

  cout<<v1.back();


   

   

  

}