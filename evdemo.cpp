#include <iostream>
using namespace std;

#include "vehicle.h"
#include "ev.h"
#include "ic.h"

int main() {
   Vehicle *model3 = new EV;
    Vehicle *mustang = new IC;

    model3->fillUp(30);  // Calls EV implementation
    mustang->fillUp(15); // Calls IC implementation

    delete model3;
    delete mustang;

    return 0;
}
