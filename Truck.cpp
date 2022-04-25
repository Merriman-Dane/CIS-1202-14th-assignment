#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck()
{
	towCap = 0;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCap;
}

void Truck::setTowCap()
{
	cout << "Enter the towing capacity: ";
	cin >> towCap;
}

int Truck::getTowCap()
{
	return towCap;
}