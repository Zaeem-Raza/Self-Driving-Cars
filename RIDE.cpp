#include "RIDE.h"
MAP RIDE::P(0, 0, 0, 0, 0, 0);// INITIALIZING static object
RIDE::RIDE()
{
    this->column_finish = 0;
    this->column_start = 0;
    this->earliest_start = 0;
    this->latest_finish = 0;
    this->row_finish = 0;
    this->row_start = 0;
    this->distance = 0;
    this->ride_number = 0;
}

RIDE::RIDE(int rs, int cs, int rf, int cf, int es, int lf, int rn)
{
    //  in case of invalid value start point will set to (0,0) & end point to (1,1)
    //  easrliest start to 0 & latest finish to 1

    this->row_start = validate(&rs, P.getRows(), 0);
    this->column_start = validate(&cs, P.getColumns(), 0);
    this->row_finish = validate(&rf, P.getRows(), 1);
    this->column_finish = validate(&cf, P.getColumns(), 1);
    this->earliest_start = validate_es_lf(&es, P.getSteps(), 0);
    this->latest_finish = validate_es_lf(&lf, P.getSteps(), 1);
    this->distance = (this->row_finish - this->row_start) + (this->column_finish - this->column_start);
    this->ride_number = rn;
}

void RIDE::setGRID(int b, int c, int ro, long long s, int ri, int v)
{
    this->P.setMap(b, c, ro, s, ri, v);
}

int RIDE::getStartX()
{
    return this->row_start;
}

int RIDE::getStartY()
{
    return this->column_start;
}

int RIDE::getEndX()
{
    return this->row_finish;
}

int RIDE::getEndY()
{
    return this->column_finish;
}

void RIDE::setRIDE(int rs, int cs, int rf, int cf, int es, int lf, int rn)
{
    this->row_start = validate(&rs, P.getRows(), 0);
    this->column_start = validate(&cs, P.getColumns(), 0);
    this->row_finish = validate(&rf, P.getRows(), 1);
    this->column_finish = validate(&cf, P.getColumns(), 1);
    this->earliest_start = validate_es_lf(&es, P.getSteps(), 0);
    this->latest_finish = validate_es_lf(&lf, P.getSteps(), 1);
    this->ride_number = rn;
}


int RIDE::getEarlistStart() const
{
    return this->earliest_start;
}

int RIDE::getLatestFinish() const
{
    return this->latest_finish;
}

int RIDE::getDistance()
{
    int d1 = this->row_finish - this->row_start;
    if (d1 < 0)
    {
        d1 *= -1;
    }
    int d2 = this->column_finish - this->column_start;
    if (d2 < 0)
    {
        d2 *= -1;
    }
    this->distance = d1 + d2;
    return this->distance;
}

int RIDE::getRideNumber()
{
    return this->ride_number;
}