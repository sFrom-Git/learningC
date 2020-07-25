/*
Author: Sean Frommelt
Purpose: This program declares and initialises a bunch of datatypes
Date: 29/06/2020
*/


#include <stdio.h>
#include <stdbool.h> //This allows us to use the bool datatype in place of _Bool and true, false, instead of 1 and 2

int main()
{
    int i;
    float f = 2.55;
    bool boolVar = true;
    double d = 5.5555555555;
    char c;
    long int iLong; //more precise int
    long double dLong; //more precise double
    long l;
    long long lL = 150203L;
    short int iS;
    short s;
    unsigned int iUnsigned; //only positive integers
    signed int iSigned; //explicitly declaring that the int is signed, same as using 'int i;'

    enum primaryColour {red, yellow, blue}; //defining the enum that can only hold the values that are defined in the curly braces

    enum primaryColour myColour, seansColour; // now we are saying that the two variable can only contain the values stated in the declaration

    myColour = red; //now we can assign only red yellow or blue to the variables of type primaryColour
    seansColour = blue;

    //another example could be months of the year

    enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    enum month seansBirthMonth;

    seansBirthMonth = May; // if you were to print this value, it would be the int 4

    enum direction {up, down, left = 10, right}; // you can explicitly assign int values to the elements in this list

    // NOTE that up = 0, down = 1, left = 10 and right = 11
    // the sequence will just iterate by 1 unless a value has been explicitly assigned

    char myChar = 'a';
    char yourChar = '2';
    char thisChar = ';';

    char newLine = '\n';
    char tab = '\t';
    




}