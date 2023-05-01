#include <iostream>
#include "Car.h"
#include "Motorcylce.h"
#include "Formula.h"
#include "Track.h"

using namespace std;

int main() {
    // Create a Car object
    Car myCar("Car", 200, 0.7, "Ford", "Mustang", "Paul Walker", 0.5);
    cout << "My Car:" << endl;
    myCar.display();
    myCar.tuning(0.1, 0.1);
    cout << "After tuning:" << endl;
    myCar.display();

    // Create a Motorcycle object
    Motorcycle myBike("Motorcycle", 150, 0.5, "Harley Davidson", "Softail", "Kick Buttowski", 0.3);
    cout << "My Motorcycle:" << endl;
    myBike.display();
    myBike.tuning(0.2, 0.2);
    cout << "After tuning:" << endl;
    myBike.display();

    // Create a FormulaCar object
    FormulaCar myFormulaCar("FormulaCar", 300, 0.9, "Ferrari", "F1", "Lewis Hamilton", 0.8);
    cout << "My FormulaCar:" << endl;
    myFormulaCar.display();
    myFormulaCar.tuning(0.3, 0.3);
    cout << "After tuning:" << endl;
    myFormulaCar.display();

    // Create a track object
    Track myTrack(1000, 0.3, 0.2, 0.2, 0.3);

    // Calculate racing time for myCar
    cout << "Racing time for myCar on the track :";
    double carTime = myCar.race(myTrack);
    cout << carTime << " minutes" << endl;

    // Calculate racing time for myBike
    cout << "Racing time for myBike on track :";
    double bikeTime = myBike.race(myTrack);
    cout << bikeTime << " minutes" << endl;

    // Calculate racing time for myFormulaCar
    cout << "Racing time for myFormulaCar on :";
    double formulaCarTime = myFormulaCar.race(myTrack);
    cout << formulaCarTime << " minutes" << endl;

    return 0;
}
