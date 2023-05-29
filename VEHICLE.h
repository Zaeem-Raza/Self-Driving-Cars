#pragma once
/*********************************************************************
 * This Vehicle class contains 2 private data members.                *
 *   1. number_of_rides_assigned is the number of rides assigned      *
 *   to the vehicle                                                   *
 *   2. number_of_steps is the number of steps taken by the vehicle   *
 *                                                                    *
 * The Public Members contain getters setters,                        *
 * constructors and destructors                                       *                             
 *                                                                    *
 *********************************************************************/
class VEHICLE
{
private:
    int number_of_rides_assigned;
    int number_of_steps;

public:
    //? Constructors and destructors
    VEHICLE();
    ~VEHICLE() = default;
    VEHICLE(int num_of_rides);

    //? Setters

    void setRides(int n);
    void setSteps(int s);
    void setNumberOfRidesAssigned(int r);
    void addsteps(int s);

    //? Getters

    int getNumberOfRides() const;
    int getNmbrSteps() const;
    int getNumberOfRidesAssigned();
};
