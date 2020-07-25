/*
Author: Sean Frommelt
Purpose: 
Date: 04/07/2020
*/


#include <stdio.h>


int main()
{
    float yearAvg;

    float monthTotal[12] = {0}; // {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} TOTALS
    float yearTotal[5] = {0};

    float rainfall[5][12] = {
        {2.5, 7.6, 2.5, 5.7, 8.9, 5.3, 4.8, 2.6, 9.2, 10.5, 12.6, 16.3}, //JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC - 2016
        {5.5, 2.5, 1.2, 4.7, 3.8, 7.7, 4.8, 3.6, 1.6, 8.1, 2.6, 1.7}, //JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC - 2017
        {1.8, 2.8, 8.2, 3.7, 1.7, 3.7, 9.4, 2.6, 3.7, 8.3, 4.7, 2.9}, //JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC - 2018
        {6.1, 9.1, 8.9, 1.2, 1.7, 1.1, 1.0, 1.2, 1.7, 1.9, 3.8, 2.9}, //JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC - 2019
        {7.2, 7.2, 3.8, 4.7, 2.8, 2.4, 9.3, 2.7, 2.8, 2.7, 2.8, 3.7}  //JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC - 2020
    };

    printf("\n");
    printf("YEAR  RAINFALL (INCHES)\n");

    for (int i = 0; i < 5; i++) // iterates through the years
    {

        for (int j = 0; j < 12; j++) // iterates through the months
        {
            yearTotal[i] += rainfall[i][j]; // populates the array with total rainfall for each year
            monthTotal[j] += rainfall[i][j];
        }

        printf("20%d  %.1f\n", 16 + i, yearTotal[i]); // prints total rainfall for each year
    }

    for (int i = 0; i < 5; i++)
    {
        yearAvg += yearTotal[i];
    }

    yearAvg /= 5;

    printf("\nThe yearly average is %.1f inches\n", yearAvg);

    printf("\nMONTHLY AVERAGES: \n");

    printf("\nJAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEP  OCT  NOV  DEC\n");
    

    for (int i = 0; i < 12; i++)
    {
        printf("%.2f ", monthTotal[i] / 5);
    }



    return 0;
}