#ifndef IC_H
#define IC_H

#include "vehicle.h"

class IC : public Vehicle {
public:
    void fillUp(int x) {
        cout << "Filling with " << x << " gallons of gasoline." << endl;
    }
};

#endif
