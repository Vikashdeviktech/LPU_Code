#include<iostream>
using namespace std;

int main(){      // 0 1 2 3
                //  1 2 3 4
    int arr[3][4]={{1,2,3,10},    // 1st row   0 index
                   {4,5,6,11},    // 2nd row   1 index
                   {7,8,9,12},    // 3rd row   2 index
            
                };
    

    for(int i=0;i<3;i++)
     { for(int j=0;j<4;j++)
        cout<<arr[i][j]<<" ";
      cout<<endl;
     }
}