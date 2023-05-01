# RacingCarSim


The task is to create a simple racing vehicle simulation program.

 The program should consist of five classes: RacingVehicle (base class), Car (derived from RacingVehicle), Motorcycle (derived from RacingVehicle), FormulaOne (derived from RacingVehicle), and Track.

 The RacingVehicle class will have protected attributes (vehicleType (string), topSpeed (double), handling (double), manufacturer (string), model (string), and driverName (string)), a public constructor to initialize all attributes, and a display() method to print the vehicle type, top speed, handling, manufacturer, model, and driver name.

 The RacingVehicle class will also have a virtual race() method that accepts a Track object and returns the time (in hours) it takes to complete the track. 

The Track class will contain the attributes of a race track, including the length (int), top speed percentage, high handling percentage, medium handling percentage, and cruise speed percentage.

 The sum of these percentage attributes should always be equal to 1.0, and if it is not, an exception should be thrown. 

Car, Motorcycle, and FormulaOne classes are derived from the RacingVehicle class, and each has an additional attribute (aerodynamics).

 Each derived class will have its own constructor to initialize all attributes, including the inherited ones. 

When implementing the race() method in each derived class, the aerodynamics attribute will affect the top speed and handling of the vehicle on specific track segments, and the higher the aerodynamics value, the higher the top speed and handling.
