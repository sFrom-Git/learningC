/*
Author: Sean Frommelt
Purpose: 
Date: 29/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum company company1, company2, company3;

    company1 = XEROX;
    company2 = GOOGLE;
    company3 = EBAY;

    printf("%d\n%d\n%d", company1, company2, company3);

    return 0;    
}