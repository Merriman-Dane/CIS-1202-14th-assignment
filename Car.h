#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

class Car : public Vehicle
{
private:
    int doors;

public:
    Car();
    void displayInfo();
    void setDoors();
    int getDoors();
};

#endif