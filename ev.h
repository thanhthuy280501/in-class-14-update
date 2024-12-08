#ifndef EV_H
#define EV_H

#include "vehicle.h"

class EV : public Vehicle {
public:
    void fillUp(int x) {
        cout << "Charging with " << x << " kWh of electricity." << endl;
    }
};

#endif
