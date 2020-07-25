/*
Author: Sean Frommelt
Purpose: Guess the number program
Date: 02/07/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2
#include <stdlib.h>
#include <time.h>


int main()
{
    time_t t;
    srand((unsigned) time(&t));

    int userGuess = 0;
    int guesses = 5;
    int randInt = rand() % 21;


    printf("This is a guessing game!\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    while (guesses > 0)
    {
        printf("\nYou have %d tries left.\n", guesses);
        printf("Enter a guess: ");
        scanf("%d", &userGuess);
        if(userGuess > randInt)
            printf("Sorry, %d is wrong. My number is less than that\n", userGuess);
        else if(userGuess < randInt)
            printf("Sorry, %d is wrong. My number is more than that\n", userGuess);
        else
        {
            printf("Congradulations. You guessed it!\n");
            break;
        }  
        guesses--;
    }

    if (guesses == 0)
        printf("\nYou ran out of guesses! My number was %d.\n", randInt);

    return 0;    
}