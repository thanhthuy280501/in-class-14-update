#ifndef EV_H
#define EV_H

#include "vehicle.h"

class EV : public Vehicle {
private:
    int currCharge;
public:
    EV() : currCharge(0) {}
    void fillUp(int x) override {
        currCharge += x;
        cout << "Charging with " << x << " kWh. Current charge: " << currCharge << " kWh." << endl;
    }
};

#endif
