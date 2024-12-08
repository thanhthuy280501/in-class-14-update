#include <iostream>
#include "vehicle.h"
#include "ev.h"
#include "ic.h"

using namespace std;

int main() {
    // Step 1: Demonstrating polymorphism with dynamic allocation
    Vehicle *transportationThing = new Vehicle("Generic", "Transport");
    Vehicle *model3 = new EV("Tesla", "Model 3", 350);
    Vehicle *mustang = new IC("Ford", "Mustang", 5.0f);

    cout << "Polymorphism with dynamic allocation:" << endl;
    transportationThing->fillUp(20); // Base class method
    model3->fillUp(50);              // EV class method
    mustang->fillUp(15);             // IC class method

    cout << "\nPrinting vehicle details:" << endl;
    transportationThing->print(); // Base class print
    model3->print();              // EV class print
    mustang->print();             // IC class print

    delete transportationThing;
    delete model3;
    delete mustang;

    // Step 2: Testing slicing problem
    cout << "\nTesting slicing problem:" << endl;

    EV ev1("Tesla", "Model S", 400);
    IC ic1("Chevrolet", "Camaro", 6.2f);
    Vehicle v1 = ev1; // Slicing happens here

    cout << "Printing EV instance (ev1):" << endl;
    ev1.print(); // Full EV details

    cout << "\nPrinting sliced Vehicle instance (v1):" << endl;
    v1.print(); // Only base class details

    // Attempting to access derived class members directly
    // cout << v1.range; // This line would cause a compiler error (uncomment to test)

    return 0;
}
