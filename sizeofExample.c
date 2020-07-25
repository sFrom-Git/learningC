/*
Author: Sean Frommelt
Purpose: An example to show how the sizeof operator is used, and also to show the user what size each datatype has on their machine.
Date: 30/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    printf("the size of an int is %zd bytes\n", sizeof(int));
    printf("the size of a char is %zd bytes\n", sizeof(char));
    printf("the size of a long is %zd bytes\n", sizeof(long));
    printf("the size of a long long is %zd bytes\n", sizeof(long long));
    printf("the size of a double is %zd bytes\n", sizeof(double));
    printf("the size of a long double is %zd bytes\n", sizeof(long double));
    return 0;    
}