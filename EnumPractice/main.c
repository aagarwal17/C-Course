/*
Author: Arun Agarwal
Purpose: This program is going to test our ability to create and output values using enum data type
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring Variables
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    //Displaying Output:
    printf("The output of XEROX is %d,\nThe output of GOOGLE is %d,\nAnd the output of EBAY is %d\n", xerox, google, ebay);
    return 0;
}
