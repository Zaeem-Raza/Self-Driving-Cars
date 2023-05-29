#include "MAP.h"
#include <iostream>
using namespace std;
MAP::MAP()
{
    this->bonus = 0;
    this->columns = 0;
    this->number_of_rides = 0;
    this->number_of_steps = 0;
    this->rows = 0;
    this->vehicles = 0;
}

MAP::MAP(int b, int c, int ro, long long s, int ri, int v)
{
    // *standard value for each is 500
    // alternate method
    this->bonus = validate(&b, 10000, 5);
    this->rows = validate(&ro, 10000, 5);
    this->columns = validate(&c, 10000, 5);
    this->vehicles = validate(&v, 1000, 10);
    this->number_of_rides = validate(&ri, 10000, 20);
    this->number_of_steps = validate_step(&s, 10000000000, 50);
}

void MAP::setMap(int b, int c, int ro, long long s, int ri, int v)
{

    this->bonus = validate(&b, 10000, 5);
    this->rows = validate(&ro, 10000, 5);
    this->columns = validate(&c, 10000, 5);
    this->vehicles = validate(&v, 1000, 10);
    this->number_of_rides = validate(&ri, 10000, 20);
    this->number_of_steps = validate_step(&s, 10000000000, 50);
}

MAP::MAP(const MAP& M)
{
    this->bonus = M.bonus;
    this->columns = M.columns;
    this->number_of_rides = M.number_of_rides;
    this->number_of_steps = M.number_of_steps;
    this->rows = M.rows;
    this->vehicles = M.vehicles;
}

void MAP::setRows(int ro)
{

    this->rows = validate(&ro, 10000, 5);
}

void MAP::setColumns(int c)
{

    this->columns = validate(&c, 10000, 5);
}

void MAP::setVehicles(int v)
{
    this->vehicles = validate(&v, 1000, 10);
}

void MAP::setBonus(int b)
{
    this->bonus = validate(&b, 10000, 5);
}

void MAP::setRides(int ri)
{

    this->number_of_rides = validate(&ri, 10000, 20);
}

void MAP::setSteps(long long s)
{

    this->number_of_steps = validate_step(&s, 10000000000, 50);
}

int MAP::getRows() const
{
    return this->rows;
}

int MAP::getColumns() const
{
    return this->columns;
}

int MAP::getBonus() const
{
    return this->bonus;
}

int MAP::getVehicles() const
{
    return this->vehicles;
}

long long MAP::getSteps() const
{
    return this->number_of_steps;
}

int MAP::getRides() const
{
    return this->number_of_rides;
}

void MAP::print() const
{
    cout << this->rows << endl;
    cout << this->columns << endl;
    cout << this->vehicles << endl;
    cout << this->number_of_rides << endl;
    cout << this->bonus << endl;
    cout << this->number_of_steps << endl;
}

MAP MAP::operator=(const MAP& M)
{
    this->bonus = M.bonus;
    this->columns = M.columns;
    this->number_of_rides = M.number_of_rides;
    this->number_of_steps = M.number_of_steps;
    this->rows = M.rows;
    this->vehicles = M.vehicles;
    return *this;
}