#include <iostream>
using namespace std;

class House{
public:
string material;
string electricalEquipment;
string furniture;

void houseDetails(){
cout<<"The House details are as follows: "<<"\n"<<material<<"\n"<<electricalEquipment<<"\n"<<furniture;
}
};


int main()
{
House houseThings;
string houseThingOne;
string houseThingSecond;
string houseThingThird;
cout<<"Enter The things for the house material, elctrical equipment, furniture"<<endl;
cin>>houseThingOne>>houseThingSecond>>houseThingThird;

houseThings.material =houseThingOne;
houseThings.electricalEquipment = houseThingSecond;
houseThings.furniture = houseThingThird;
houseThings.houseDetails();


return 0;
}