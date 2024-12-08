#include <iostream>
using namespace std;

#include "vehicle.h"
#include "ev.h"
#include "ic.h"

int main() {
    // Demonstrate non-virtual behavior
    Vehicle *transportationThing = new Vehicle;
    Vehicle *model3 = new EV;
    Vehicle *mustang = new IC;

    cout << "Non-virtual calls:" << endl;
    transportationThing->fillUp(20);
    model3->fillUp(20);
    mustang->fillUp(20);

    // Change Vehicle::fillUp to virtual and recompile
    cout << "\nVirtual calls:" << endl;
    transportationThing->fillUp(20);
    model3->fillUp(20);
    mustang->fillUp(20);

    delete transportationThing;
    delete model3;
    delete mustang;

    return 0;
}
