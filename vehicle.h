// vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle {
public:
    void fillUp(int e) {  // Non-virtual initially
        cout << "Filling with " << e << " generic units of energy fuel." << endl;
    }
};

#endif
