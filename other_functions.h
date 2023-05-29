#pragma once
/*****************************************************************
 * This is the header file                                       *
 * This file contains the function definitions                   *
 * 1. The Validate function is used to validate the input values *                                            *
 * in case the user enters a value out of range, the default     *
 * value is used because we cannot ask the user to enter the     *
 * value again                                                   *
 *                                                               *
 * 2. The Validate_es_fs function is used to validate the input  *
 * values of earliest start and latest finish in case the user   *
 * enters a value out of range, the default                      *
 * value is used because we cannot ask the user to enter the     *
 * value again                                                   *
 *                                                               *
 * 3.The disance function takes 4 integers as parameter          *
 * and returns the number of steps required to complete the ride *
 *                                                               *
 *                                                               *
 ****************************************************************/
inline int validate(int* num, int range, int default_value)
{
    if (!(*num >= 0 && *num <= range))
    {
        *num = default_value;
    }
    return *num;
}
inline int validate_es_lf(int* num, long long range, int default_value)
{
    if (!(*num >= 0 && *num <= range))
    {
        *num = (int)default_value;
    }
    return *num;
}
inline int distance(int x1, int y1, int x2, int y2)
{
    int d1 = x2 - x1;
    if (d1 < 0)
    {
        d1 *= -1;
    }
    int d2 = y2 - y1;
    if (d2 < 0)
    {
        d2 *= -1;
    }
    int dis = d1 + d2;
    return dis;
}
inline long long validate_step(long long* num, long long int range, int default_value)
{
    if (!(*num >= 0 && *num <= range))
    {
        *num = default_value;
    }
    return *num;
}
