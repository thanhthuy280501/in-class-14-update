#ifndef IC_H
#define IC_H

#include "vehicle.h"

class IC : public Vehicle {
private:
    int currGallons;
public:
    IC() : currGallons(0) {}
    void fillUp(int x) override {
        currGallons += x;
        cout << "Filling with " << x << " gallons. Current gallons: " << currGallons << "." << endl;
    }
};

#endif
