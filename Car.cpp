#include "car.h"
#include <iostream>
using namespace std;

Car::Car()
{
	doors = 0;
}

void Car::displayInfo()
{
	Vehicle::displayInfo;
	cout << "Doors: " << doors;
}

void Car::setDoors()
{
	cout << "Enter the number of doors: ";
	cin >> doors;
}

int Car::getDoors()
{
	return doors;
}