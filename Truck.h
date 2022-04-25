#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

class Truck : public Vehicle
{
private:
    int towCap;

public:
    Truck();
    void displayInfo();
    void setTowCap();
    int getTowCap();
};

#endif
