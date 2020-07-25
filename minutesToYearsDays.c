/*
Author: Sean Frommelt
Purpose: Takes the amount of minutes from a user and calculates the amount of years and days, then print them to the screen.
Date: 29/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    double minsDouble = 0.0;

    printf("How many minutes: ");
    scanf("%lf", &minsDouble);

    double hoursDouble = minsDouble / 60.0;
    double daysDouble = hoursDouble / 24.0;
    double yearsDouble = daysDouble / 365.0;

    int yearsInt = (int) yearsDouble; // This truncates to give the amount of whole years
    int daysInt = (int) daysDouble;   // this truncates to give the amount of whole days

    printf("There are %d whole years and %d whole days in %.2lf minutes\n", yearsInt, daysInt, minsDouble);
    printf("There are %lf actual years and %lf actual days in %.2lf minutes\n", yearsDouble, daysDouble, minsDouble);
    
    

    return 0;    
}