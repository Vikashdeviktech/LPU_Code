#include<iostream>
using namespace std;

class Sum{
    private:

    int x,y;

    public:

    Sum(int x1 ,int y1, int z=0, int w=0){

        x=x1;
        y=y1;

        cout<<x+y+z+w<<endl;

    }
};

int main(){

    Sum obj(20,30);
     Sum obj1(20,30,70);

}

