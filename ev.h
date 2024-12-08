#ifndef EV_H
#define EV_H

#include "vehicle.h"

class EV : public Vehicle {
private:
    int currCharge;
    int range;
public:
    EV(string mk, string mdl, int rng) : Vehicle(mk, mdl), currCharge(0), range(rng) {}
    void fillUp(int x) override {
        currCharge += x;
        cout << "Charging with " << x << " kWh. Current charge: " << currCharge << " kWh." << endl;
    }
    void print() const override {
        Vehicle::print();
        cout << "Charge: " << currCharge << " kWh, Range: " << range << " miles" << endl;
    }
};

#endif
