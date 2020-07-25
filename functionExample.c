/*
Author: Sean Frommelt
Purpose: example of the function structure in C
Date: 04/07/2020
*/


#include <stdio.h>

int functionExample(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 2;
    int b = 3;
    int z = 0;

    z = functionExample(a, b);

    printf("%d\n", z);

    return 0;
}