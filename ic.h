#ifndef IC_H
#define IC_H

#include "vehicle.h"

class IC : public Vehicle {
private:
    int currGallons;
    float displacement;
public:
    IC(string mk, string mdl, float disp) : Vehicle(mk, mdl), currGallons(0), displacement(disp) {}
    void fillUp(int x) override {
        currGallons += x;
        cout << "Filling with " << x << " gallons. Current gallons: " << currGallons << "." << endl;
    }
    void print() const override {
        Vehicle::print();
        cout << "Fuel: " << currGallons << " gallons, Displacement: " << displacement << " liters" << endl;
    }
};

#endif
