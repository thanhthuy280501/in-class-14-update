// vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
public:
    Vehicle(string mk, string mdl) : make(mk), model(mdl) {}
    virtual void fillUp(int e) = 0; // Pure virtual
    virtual void print() const {
        cout << "Make: " << make << ", Model: " << model << endl;
    }
    virtual ~Vehicle() = default;  // Virtual destructor
        cout << "Filling with " << e << " generic units of energy fuel." << endl;
    }
};

#endif
