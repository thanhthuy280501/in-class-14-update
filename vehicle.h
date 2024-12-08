// vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void fillUp(int e) = 0; // Pure virtual
    virtual ~Vehicle() = default;  // Virtual destructor
        cout << "Filling with " << e << " generic units of energy fuel." << endl;
    }
};

#endif
