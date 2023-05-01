#pragma once
#include <string>


using namespace std;
#include <iostream>


class Track
{
    int length;
    double topSpeedPct;
    double highHandlingPct;
    double mediumHandlingPct;
    double cruiseSpeedPct;


public:
    Track(int len, double topPct, double highPct, double medPct, double cruisePct)
    {
        if (topPct + highPct + medPct + cruisePct != 1.0)
        {
            throw  invalid_argument("Percentages must add up to 1.0");
        }
        length = len;
        topSpeedPct = topPct;
        highHandlingPct = highPct;
        mediumHandlingPct = medPct;
        cruiseSpeedPct = cruisePct;
    }

    int getLength() const
    {
        return length;
    }

    double getTopSpeedPct() const
    {
        return topSpeedPct;
    }

    double getHighHandlingPct() const
    {
        return highHandlingPct;
    }

    double getMedHandlingPct() const
    {
        return mediumHandlingPct;
    }

    double getCruiseSpeedPct()  const
    {
        return cruiseSpeedPct;
    }


};
