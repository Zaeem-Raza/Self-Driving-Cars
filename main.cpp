/************************************************************
 *                OOP Assignment-4                          *
 *                                                          *
 * Members:                                                 *
 *          1. Malika Farid  BCSF21M017                     *
 *          2. Zaeem Raza    BCSF21M022                     *
 *                                                          *
 * IDE Used: Visual Studio 2022                             *
 *                                                          *
 * Language: C++                                            *
 *                                                          *
 * Read the README.md file for more information.            *
 * *********************************************************/
#include <iostream>
#include <fstream>
#include "Simulation.h"
using namespace std;
int main()
{
    ifstream fin;
    int ro, c, v, ri, b = 0;
    long long s = 0;
    int rs, cs, rf, cf, es, lf = 0;
    fin.open("input.txt", ios::in);
    if (fin.fail())
    {
        cout << "This file does'nt exist." << endl;
        return 0;
    }
    else
    {
        fin >> ro >> c >> v >> ri >> b >> s;
        MAP M(b, c, ro, s, ri, v);
        RIDE* R = new RIDE[ri];
        R[0].setGRID(b, c, ro, s, ri, v);
        VEHICLE* V = new VEHICLE[v];
        for (int k = 0; k < ri; k++)
        {
            fin >> rs >> cs >> rf >> cf >> es >> lf;
            R[k].setRIDE(rs, cs, rf, cf, es, lf, k);
        }
        int ride_each = ri / v;
        int rem = ri % v;
        for (int i = 0; i < v - rem; i++)
        {
            V[i].setNumberOfRidesAssigned(ride_each);
        }
        for (int i = v - rem; i < v; i++)
        {
            V[i].setNumberOfRidesAssigned(ride_each + 1);
        }
        simulate(&M, V, R);
        fin.close();
        return 0;
    }
}