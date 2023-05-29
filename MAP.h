#pragma once
#include "other_functions.h"
/*********************************************************************
 * The Map class Contains private data members such as rows,columns  *
 *  in the fleet, total vehicles in the fleet and the number of      *
 * rides to be achieved in the fleet. The bonus is given in          *
 *  the input file.                                                  *
 *                                                                   *
 *                                                                   *
 * The Public Members contain getters setters,                       *
 * constructors and destructors                                      *                             
 *                                                                   *
 *                                                                   *
 * *******************************************************************/
class MAP
{
private:
    int rows;
    int columns;
    int vehicles;
    int number_of_rides;
    int bonus;
    long long number_of_steps;

public:
    //? Constructors & Destructors
    MAP();                                                                      // default constructor
    MAP(int b, int c, int ro, long long s, int ri, int v);         // parameterized
    void setMap(int b, int c, int ro, long long s, int ri, int v); // setter
    MAP(const MAP& M);                                                          // copy constructor
    ~MAP() = default;

    //? setters

    void setRows(int ro);
    void setColumns(int c);
    void setVehicles(int v);
    void setBonus(int b);
    void setRides(int r);
    void setSteps(long long s);

    //? getters

    int getRows() const;
    int getColumns() const;
    int getBonus() const;
    int getVehicles() const;
    long long getSteps() const;
    int getRides() const;

    //? print function
    void print() const;

    //? operators required
    MAP operator=(const MAP& M); // assignment operator
};

