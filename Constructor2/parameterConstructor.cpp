#include <iostream>
using namespace std;

class test
{
private:
    int x;
    int y;
public:
    void getdata()
    {
        cout << "enter 1st number : ";
        cin >> x;
        cout << "enter 2nd number :";
        cin >> y;
    }

    friend void task1(test);
    friend void task2(test);
};

void task1(test t1)
{   
    int square;
    
    for (int i = 1; i <=t1.x; i++)
    {
        square = i * i;
        cout << "\nThe square of " << i << " is : " << square;
    }
}
void task2(test t2)
{    
  int sum=0;
    
    for (int i = 1; i <=t2.x; i++)
    {
        sum = sum +i;
        
    }
    cout << "\nThe sum of  " << sum;
}

int main()
{
    test t;
    t.getdata();
    task1(t);
    task2(t);
    return 0;
}