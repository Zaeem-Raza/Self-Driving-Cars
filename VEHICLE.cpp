#include "VEHICLE.h"
VEHICLE::VEHICLE()
{
    this->number_of_rides_assigned = 0;
    this->number_of_steps = 0;
}

VEHICLE::VEHICLE(int num_of_rides)
{
    this->number_of_rides_assigned = num_of_rides;
    this->number_of_steps = 0;
}

void VEHICLE::setRides(int n)
{
    this->number_of_rides_assigned = n;
    this->number_of_steps = 0;
}

int VEHICLE::getNumberOfRides() const
{
    return number_of_rides_assigned;
}

int VEHICLE::getNmbrSteps() const
{
    return this->number_of_steps;
}

void VEHICLE::setSteps(int s)
{
    this->number_of_steps = s;
}

void VEHICLE::addsteps(int s)
{
    this->number_of_steps += s;
}

void VEHICLE::setNumberOfRidesAssigned(int r)
{
    this->number_of_rides_assigned = r;
}

int VEHICLE::getNumberOfRidesAssigned()
{
    return this->number_of_rides_assigned;
}
