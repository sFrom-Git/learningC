/*
Author: Sean Frommelt
Purpose: This program declares and initialises a bunch of datatypes
Date: 29/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);   // %i = int
    printf("floatingVar = %f\n", floatingVar); // %f = float
    printf("doubleVar = %e\n", doubleVar);     // %e = double
    printf("doubleVar = %g\n", doubleVar);     // %g = double
    printf("charVar = %c\n", charVar);         // %c = char
    printf("boolVar = %i\n", boolVar);         // %i = int

    float x = 3.99932323232;

    printf("%.5f", x); // %.xf where x is the digits of precision you want after the decimal place

    return 0;    
}