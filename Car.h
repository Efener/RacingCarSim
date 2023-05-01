#pragma once
# include "RacingVehicle.h"



class Car : public RacingVehicle
{
    double aerodynamics;

public:
    Car(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName, double aerodynamics)
        : RacingVehicle(vehicleType, topSpeed, handling, manufacturer, model, driverName), aerodynamics(aerodynamics) {}

    void tuning(double topSpeedPct = 0, double handlingPct = 0) {
        double topSpeedIncrease = top_speed * topSpeedPct;
        double handlingIncrease = handling * handlingPct;
        top_speed += topSpeedIncrease;
        handling += handlingIncrease;
    }

    double race(Track& track) {
        double time = 0.0;
        double distance = track.getLength();
        double topSpeedPct = track.getTopSpeedPct();
        double highHandlingPct = track.getHighHandlingPct();
        double mediumHandlingPct = track.getMedHandlingPct();
        double cruiseSpeedPct = track.getCruiseSpeedPct();

        while (distance > 0) {
            if (distance >= (topSpeedPct * track.getLength())) {
                time += (top_speed / 60.0);
                distance -= (topSpeedPct * track.getLength());
            }
            else if (distance >= (highHandlingPct * track.getLength()) && handling >= 0.8) {
                time += ((top_speed * (1 + (0.1 * aerodynamics))) / 60.0);
                distance -= (highHandlingPct * track.getLength());
            }
            else if (distance >= (mediumHandlingPct * track.getLength()) && handling >= 0.6) {
                time += ((top_speed * (1 + (0.05 * aerodynamics))) / 60.0);
                distance -= (mediumHandlingPct * track.getLength());
            }
            else if (distance >= (cruiseSpeedPct * track.getLength())) {
                time += ((top_speed * 0.5) / 60.0);
                distance -= (cruiseSpeedPct * track.getLength());
            }
            else {
                time += (distance / (top_speed / 60.0));
                distance = 0;
            }
        }
        return time;
    }



};