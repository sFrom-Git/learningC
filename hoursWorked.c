/*
Author: Sean Frommelt
Purpose: This asks the user for hours work and provides the gross pay, net pay and taxes printed to the console.
Date: 30/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    double hours = 0.0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    double payRate = 12.00;
    double overtimeRate = payRate * 1.5;

    printf("How many hours did you work: ");
    scanf("%lf", &hours);

    if (hours > 40)
    {
        grossPay = 480 + ((hours - 40) * overtimeRate);
    }
    else
    {
        grossPay = hours * payRate;
    }

    if (grossPay <= 300)
    {
        taxes = 0.15 * grossPay;
    }
    else if (grossPay <= 450)
    {
        taxes = 45 + ((grossPay - 300) * 0.20);
    }
    else
    {
        taxes = 75 + ((grossPay - 450) * 0.25); 
    }
    
    netPay = grossPay - taxes;

    printf("\nThe gross pay is: $%.2lf\n", grossPay);
    printf("The taxes are: $%.2lf\n", taxes);
    printf("The net pay is: $%.2lf\n", netPay);

    return 0;    
}