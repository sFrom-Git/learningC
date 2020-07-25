/*
Author: Sean Frommelt
Purpose: Example of if, else, and else-if statements as well as the shorthand notation for if-else in C
Date: 30/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    int score = 95;
    int big = 90;

    if (score > big)                 // Example for if statement
    {
        printf("condition was met");   
    }
    else                             // Example for else statement
    {
        printf("condition wasn't met");
    }

    if (score > big)
    {
        printf("Condition 1 was met"); 
    }
    else if (score < big)             // Example for else-if statement
    {
        printf("Condition 2 was met");
    }
    else
    {
        printf("Condition 3 was met");
    }

    // Short hand notation for if-else statement
    (score > big) ? printf("Condition was met") : printf("Condition wasn't met"); 
    //Condition     //expression 1 (true)         //expression 2 (false)

    int x;
    int y;

    x = y > 7 ? 25 : 50;
    // if y is greater than 7, x = 25.
    // else x = 50
    

    return 0;    
}