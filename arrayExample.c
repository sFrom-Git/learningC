/*
Author: Sean Frommelt
Purpose: example of arrays
Date: 04/07/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2



int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades: \n");

    int i;

    for(i = 0 ; i < count ; ++i)
    {
        printf("%2u> ",i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count;

    printf("The average is %.2f\n", average);

    return 0;    
}