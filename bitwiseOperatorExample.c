/*
Author: Sean Frommelt
Purpose: These are some examples of the bitwise operators
Date: 29/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; // 0000 0000 0000 0000 0000 0000 0000 1101
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;
    int result5 = 0;

    result1 = a & b;   // AND operator
    // 0000 1100
    // 12

    result2 = a | b;   // OR operator
    // 0011 1101
    // 61

    result3 = ~a;      // NOT operator
    // 1100 0011
    // -61

    result4 = a << 1;  // left shift
    // 0111 1000
    // 120

    result5 = a >> 1;  // right shift
    // 0001 1110
    // 30

    printf("result1 is %d\n", result1);
    printf("result2 is %d\n", result2);
    printf("result3 is %d\n", result3);
    printf("result4 is %d\n", result4);
    printf("result5 is %d\n", result5);


    return 0;    
}