#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle
{
private:
    string make;
    int year;

public:
    Vehicle();
    void displayInfo();
    void setMake();
    void setYear();
    string getMake();
    int getYear();
};

#endif