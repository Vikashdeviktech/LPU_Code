#include<iostream>
#include<string>
using namespace std;

class ClassA{
    private:
     string a="vikash";
    public:
     string getString(){
         return a;
     }
    void display(){
        cout<<a<<endl;
    }
};

class ClassB{
   string b;
   public:
   void operator=(ClassA a){
       b=a.getString();
   }

   void display(){
       cout<<b<<endl;
   }
};

int main(){
    ClassA a;
    ClassB b;
    b=a;   // one object value is assignemd to another object 
    a.display();
    b.display();
}