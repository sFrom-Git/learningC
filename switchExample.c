/*
Author: Sean Frommelt
Purpose: an example for the switch structure in C, as well as a more useful example.
Date: 30/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    int score;


    score = 5;


    switch(score)
    {
        case 1:
            printf("condition met");
            break;
        case 2:
            printf("condition met");
            break;
        case 3:
            printf("condition met");
            break;
        case 4:
            printf("condition met");
            break;
        case 5:
            printf("condition met"); // This statement will execute because score = 5. This case will execute when score == 5
            break;
        default:
            printf("no condition was met"); // This will get executed if score does not equal any of the cases
            break;
    }

    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday};
    enum Weekday today = Monday;

    switch(today)
    {
        case Monday:
            printf("Today is Monday!");
            break;
        case Tuesday:
            printf("Today is Tuesday!");
            break;
        case Wednesday:
            printf("Today is Wednesday!");
            break;
        case Thursday:
            printf("Today is Thursday!");
            break;
        case Friday:
            printf("Today is Friday!");
            break;
        default:
            printf("Today is a Weekend!");
            break;
    }

    float value1, value2;
    char operator;

    printf("\nType in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch(operator)
    {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            printf("%.2f\n", value1 / value2);
            break;
        default:
            printf("Unknown operator");
            break;
    }

    return 0;    
}