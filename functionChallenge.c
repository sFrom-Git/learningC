/*
Author: Sean Frommelt
Purpose: challenge
Date: 04/07/2020
*/


#include <stdio.h>

int gcd(int x, int y)
{
    int greatestDivisor = 0;
    while (y != 0)
    {
        int z = x / y;
        int k = x % y;
        if (k == 0)
        {
            greatestDivisor = y;
            y = 0;
        }
        else
        {
            x = y;
            y = k;
        }
    }
    return greatestDivisor;
}

float absolute(float x)
{
    if (x < 0)
        x = -x;
    return x;
}

double squareRoot(double x)
{
    int count = 1;
    _Bool fin = 0;
    int perfectSqr = 0;
    double lower = 0;
    double y = 0;
    double square = 0;

    if (x < 0)
    {
        square = -1.0;
        printf("Invalid input: Negative number");
    }
    else if (x == 0)
    {
        square = 0;
    }

    while(fin == 0)
    {
        perfectSqr = count * count;
        if (x > perfectSqr)
        {
            lower = count;
            count++;
        }
        else
        {
            while(fin == 0)
            {
                y = x / lower;
                lower = (y + lower) / 2;
                y = lower;
               
                if ((y * y) - x < 0.00000001)
                {
                    square = y;
                    fin = 1;
                }
            }
        }  
    }
    return square;
}

int main()
{

    int num = 157;

    int x = gcd(100, 30);

    float y = absolute(-20);

    double z = squareRoot(num);

    printf("\n");
    printf("The greatest common divisor of 48 and 18 is %d\n", x);
    printf("\n");
    printf("The absolute value of -20.00 is %.2f\n", y);
    printf("\n");
    printf("The square root of %d is %.8f\n", num, z);
    printf("\n");




    return 0;
}