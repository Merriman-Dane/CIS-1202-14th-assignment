// Dane Merriman
// CIS 1202 501
// April 24, 2022
// Fourteenth Assignment - Inheritance, Polymorphism, and Virtual Functions

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
    cout << "Vehicle Program\n\n";

    cout << "Vehicle: \n";
    Vehicle v;
    v.setMake();
    v.setYear();
    v.displayInfo();
    cout << endl;

    cout << "Car: \n";
    Car c;
    c.setMake();
    c.setYear();
    c.setDoors();
    c.displayInfo();
    cout << endl;

    cout << "Truck: \n";
    Truck t;
    t.setMake();
    t.setYear();
    t.setTowCap();
    t.displayInfo();
    cout << endl;

    system("pause");
    return 0;
}