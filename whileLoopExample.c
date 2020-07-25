/*
Author: Sean Frommelt
Purpose: Example of the while and the do-while loop structure in C
Date: 02/07/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    int count = 0;
    while(count <= 5)
    {
        printf("%i\n", count);
        ++count;
    }

    int num = 0;

    while(num != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    }

    int number = -1;
    do
    {
        printf("Enter a number: "); // this happens once, regardless of the exit condition
        scanf("%d", &num);
    } while (number != -1); // after the initial execution of the body of the loop, the loop acts just like a while loop
    

    return 0;    
}