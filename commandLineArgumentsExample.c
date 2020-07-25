/*
Author: Sean Frommelt
Purpose: 
Date: 29/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main(int argc, char *argv[])
{
    int numberOfArguments = argc; // argc = argument count
    char *argument1 = argv[0];    // argv = argument vector = the list of strings passed to the program from the command line
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);

    return 0;    
}