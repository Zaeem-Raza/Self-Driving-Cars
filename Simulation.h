/****************************************************************
 * The simulate function is the main function                   *
 * it takes 3 pointers as parameters                            *
 * 1. MAP pointer                                               *
 * 2. VEHICLE pointer                                           *
 * 3. RIDE pointer                                              *
 *                                                              *
 * The function first assigns the rides to the vehicles         *
 * and then calculates the number of steps required to complete *
 * the ride                                                     *
 *                                                              *
 * The function also calculates the number of rides assigned to *
 * each vehicle                                                 *
 ***************************************************************/
#pragma once
#include "RIDE.h"
#include "VEHICLE.h"
#include <fstream>
#include <iostream>
using namespace std;
void simulate(MAP* M, VEHICLE* V, RIDE* R)
{
    ofstream fout;
    fout.open("submission_file.txt", ios::out);
    int d = M->getRows() * M->getColumns();
    int dis = 0;
    int previous_x = 0;
    int previous_y = 0;
    int previous_steps_count = 0;
    int index = 0;
    int i = 0;
    int tot_bonus = 0;
    int tot_points = 0;
    fout << i + 1 << " ";
    while (M->getRides())
    {
        int bonus = 0;
        int points = 0;
        if (previous_steps_count < M->getSteps())
        {
            d = M->getRows() * M->getColumns();
            if (previous_steps_count == 0)
            {
                for (int j = M->getRides() - 1; j >= 0; j--)
                {
                    dis = distance(0, 0, R[j].getStartX(), R[j].getStartY());
                    if (dis <= d)
                    {
                        d = dis;
                        index = j;
                    }
                }
            }
            else
            {
                for (int j = M->getRides() - 1; j >= 0; j--)
                {
                    dis = distance(previous_x, previous_y, R[j].getStartX(), R[j].getStartY());
                    if (dis <= d)
                    {
                        d = dis;
                        index = j;
                    }
                }
            }
            V[i].addsteps(d);
            if (V[i].getNmbrSteps() <= R[index].getEarlistStart())
            {
                bonus += M->getBonus();
            }
            if (V[i].getNmbrSteps() < R[index].getEarlistStart())
            {
                int e = R[index].getEarlistStart() - V[i].getNmbrSteps();
                V[i].addsteps(e);
            }
            d = R[index].getDistance();
            V[i].addsteps(d);
            if (V[i].getNmbrSteps() < R[index].getLatestFinish())
            {
                points += d;
            }
            tot_bonus += bonus;
            tot_points += points;
            previous_x = R[index].getEndX();
            previous_y = R[index].getEndY();
            fout << R[index].getRideNumber() << " ";
            for (int l = index; l < M->getRides() - 1; l++)
            {
                R[l] = R[l + 1];
            }
            M->setRides(M->getRides() - 1);
            previous_steps_count += V[i].getNmbrSteps();
            V[i].setSteps(0);
            V[i].setNumberOfRidesAssigned(V[i].getNumberOfRidesAssigned() - 1);
            if (V[i].getNumberOfRidesAssigned() == 0 && M->getRides() != 0)
            {
                fout << endl;
                i++;
                previous_steps_count = 0;
                fout << i + 1 << " ";
            }
        }
        else
        {
            M->setRides(M->getRides() - V[i].getNumberOfRides());
            i++;
        }
    }
    fout.close();
    cout << "\n\n\n\t\tTOTAL SCORE OF THIS SUBMISSION IS : " << tot_bonus + tot_points << endl;
}