/*
Author: Sean Frommelt
Purpose: This program prints asks the user for a number and a word separated by a space
and then prints the number and word to the console

Date: 29/06/2020
*/


#include <stdio.h>


int main()
{
    char str[100];
    int i;

    printf("Enter a value: "); //prints to the standard output
    scanf("%d %s", &i, str); //scans the standard input for a decimal and a string

    //NOTE that every datatype except str will need to use a reference '&' before the variable name in scanf()

    printf("\nYou entered: %d:::::%s\n", i, str);
    return 0;
    
}