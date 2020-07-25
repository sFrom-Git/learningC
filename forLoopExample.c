/*
Author: Sean Frommelt
Purpose: Example of the for loop structure in C
Date: 01/07/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    //  *              #            $
    for(int count = 1; count <= 10; ++count)
    {
        printf("%d\n", count);
    }

    // * This expression executes once, when the loop starts. Typically you would declare and initialise the value you want to increment

    // # This expression is evaluated at the beginning of each loop cycle. if it is true, the loops continues, and if it is false, the loop ends.

    // $ This expression is executed at the end of every loop cycle. typically used for incrementing the declared value in *

    /***************************************************
     *                                                 *
     * Some cool things you can do with for loops in C *
     *                                                 *
     **************************************************/

    int sum = 0;

    for(int count = 1; count <= 10; sum += count++)
    {
        printf("%d %d\n", sum, count);
    }

    return 0;    
}