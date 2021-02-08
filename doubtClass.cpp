#include <iostream>
#include <string>
using namespace std;

class House
{
public:
    string material;
    string electricalEquipment;
    string furniture;

    void houseDetails()
    {
        cout << "The House details are as follows: "<< " "
             << material << " "
             << electricalEquipment << " "
             << furniture;
    }
};

int main()
{
    House houseThings;
    string houseThingOne;
    string houseThingSecond;
    string houseThingThird;
    cout << "Enter The things for the house material, elctrical equipment, furniture" << endl;
    getline(cin,houseThingSecond);
    cin >> houseThingOne  >> houseThingThird;

    houseThings.material = houseThingOne;
    houseThings.electricalEquipment = houseThingSecond;
    houseThings.furniture = houseThingThird;
    houseThings.houseDetails();

    return 0;
}