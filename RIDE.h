#pragma once
#include "MAP.h"
/*********************************************************************
 * This Ride class contains a static object of class Map             *
 * as a private data member.So , each Ride follows the same          *
 * pattern of the Map. Each ride has same grtid section.             *
 *                                                                   *
 * The other members are Starting points & Ending points             *
 *                                                                   *
 * bonus is awarded according to the Earliest Start                  *
 * while points are awarded according to the Latest finish           *
 *                                                                   *
 *                                                                   *
 * The Public Members contain getters setters,                       *
 * constructors and destructors                                      *
 *                                                                   *
 *                                                                   *
 * *******************************************************************/
class RIDE
{
private:
    static MAP P;
    int row_start;
    int column_start;
    int row_finish;
    int column_finish;
    int earliest_start;
    int latest_finish;
    int distance;
    int ride_number;

public:
    //? Constructors and destructors
    RIDE();
    RIDE(int rs, int cs, int rf, int cf, int es, int lf, int rn);
    ~RIDE() = default;

    //? Setters

    void setGRID(int b, int c, int ro, long long s, int ri, int v);
    void setRIDE(int rs, int cs, int rf, int cf, int es, int lf, int rn);

    //? Getters

    int getStartX();
    int getStartY();
    int getEndX();
    int getEndY();
    int getEarlistStart() const;
    int getLatestFinish() const;
    int getDistance();
    int getRideNumber();
};

