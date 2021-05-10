#include<iostream>
using namespace std;

class x{
    public:
    inline void s(){
        static int x=10;
        static int z=99;
        cout<<x<<z;
    }
};

int main(){
    x x1;
    x1.s();
}