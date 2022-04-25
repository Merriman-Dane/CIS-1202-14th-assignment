#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle()
{
    make = "";
    year = 0;
};

void Vehicle::displayInfo()
{
    cout << "Vehicle Information: \n"
         << "Manufacturer: " << make << endl
         << "Year Built: " << year << endl;
};

void Vehicle::setMake()
{
    cout << "Enter the manufacturer: ";
    getline(cin >> ws, make);
};

void Vehicle::setYear()
{
    cout << "Enter the year built: ";
    cin >> year;
};

string Vehicle::getMake()
{
    return make;
};

int Vehicle::getYear()
{
    return year;
};