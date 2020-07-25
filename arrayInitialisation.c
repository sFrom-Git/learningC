/*
Author: Sean Frommelt
Purpose: example of arrays
Date: 04/07/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

#define MONTHS 12

int main()
{
    int counters[5] = {0, 0, 0, 0, 0};

    int integers[5] = {0, 1, 2, 3};
    // this is valid, indexes 0-3 will be assigned the numbers in the list, any indecies that didn't get initialised will be
    // assigned 0 as their value

    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %d has %2d days.\n", index +1, days[index]);

    return 0;    
}