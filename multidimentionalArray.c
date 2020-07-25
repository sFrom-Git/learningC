/*
Author: Sean Frommelt
Purpose: example of multidimentional arrays
Date: 04/07/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

#define MONTHS 12

int main()
{

    int numbers2D[3][4] = {
        {10, 20, 30, 40}, //row 1
        {15, 25, 35, 45}, //row 2
        {47, 48, 49, 50}  //row 3
    };
    
            //ROWS, COLUMNS, BLOCKS
    int numbers3D[3][4][4] = {
        {   //BLOCK 0
            {10, 20, 30, 40}, //row 1
            {15, 25, 35, 45}, //row 2
            {47, 48, 49, 50}  //row 3
        },
        {   //BLOCK 1
            {10, 20, 30, 40}, //row 1
            {15, 25, 35, 45}, //row 2
            {47, 48, 49, 50}  //row 3   
        }
    }; //BLOCK 2 and 3 are set to all 0's

    return 0;    
}