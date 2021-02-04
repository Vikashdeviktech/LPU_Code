#include <iostream>
#include <string>

using namespace std;

class house
{
public:
    string objectName;
    int quantity;
};

int main()
{
    house house1;

    house1.objectName = "TV,almirah,fridge,washingMachine,etc";
    house1.quantity = 1;

    cout << "Your Object Name:-\n,Quantity:-" << house1.objectName << house1.quantity << endl;
}