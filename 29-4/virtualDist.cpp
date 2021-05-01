#include <iostream>
using namespace std;
class Player
{

public:
    string n1, n2;
    virtual void getdata()
    {
        cout << "Enter the name of cricket player and football player" << endl;
        cin >> n1 >> n2;
    }
    virtual void displaydata() = 0;
};
class Cricketplayer : public Player
{
public:
    int r;
    void getRuns()
    {
        cout << "enter the runs scored by the cricket player" << endl;
        cin >> r;
    }
    void displaydata()
    {
        cout << "Name of the cricket player and runs scored are " << n1 << endl
             << r << endl;
    }
};

class Footballplayer : public Player
{
public:
    int g;
    void getGoals()
    {
        cout << "enter the goals scored by the football player" << endl;
        cin >> g;
    }
    void displaydata()
    {
        cout << "Name of the football player and goals scored are " << n2 << endl
             << g << endl;
    }
};
int main()
{
    Player *n1, *n2;
    Cricketplayer a;
    Footballplayer b;
    n1 = &a;
    n2 = &b;
    n1->getdata();
    a.getRuns();
    n1->displaydata();
    b.getGoals();
    n2->displaydata();
}