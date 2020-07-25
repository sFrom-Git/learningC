/*
Author: Sean Frommelt
Purpose: Takes the height and width of a rectangle from the user, calculates and then returns the area and perimeter.
Date: 29/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main(int argc, char *argv[])
{
    double height = 0.0; // declaring and initialising variables
    double width = 0.0;
    double perimeter = 0.0;
    double area = 0.0;

    printf("Enter the height and width of the rectangle: ");
    scanf("%lf %lf", &height, &width); //scans the standard input for a double and a double

    perimeter = 2.0 * (height + width);
    area = height * width;

    printf("\nThe perimeter of the rectangle is: %.2lf\n", perimeter);
    printf("The area of the rectangle is: %.2lf\n", area);

    return 0;    
}