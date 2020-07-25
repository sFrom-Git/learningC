/*
Author: Sean Frommelt
Purpose: This prints the primes from 3 to 100
Date: 04/07/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2


int main()
{
    int primes[100] = {2, 3};
    int numbersToCheck = 2;
    int count = 0;

    for(int i = 3; i < 100; i += 2)
    {

        count = numbersToCheck;
        for(int j = 0; j < count + 1; j++)
        {
            if (j == count)
            {
                primes[j] = i;
                numbersToCheck += 1;
            }
            else if(i % primes[j] != 0)
            {
                continue;
            }
            else
            {
                break;
            }
            
        }
    }

    for (int i = 0; i < numbersToCheck; i++)
    {
        printf("%d\n", primes[i]);
    }
    return 0;    
}