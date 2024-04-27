/*
Author: Arun Agarwal
Purpose: This program is going to convert a user inputted number of minutes into days and years
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    int minutesInYears = 60*24*365;
    double Years = 0.0;
    double Days = 0.0;

    printf("Please enter the number of minutes: \n");

    //Getting Input from user:
    scanf("%d", &minutes);

    Years = minutes/minutesInYears;
    Days = (minutes/(60.0*24.0));

    printf("%d minutes is approximately %f years and %f days\n", minutes, Years, Days);



    //Challenge 2: Using sizeOfOperator:

    printf("Varriables of type char occupy %u bytes\n", sizeof(char));
    printf("Varriables of type int occupy %u bytes\n", sizeof(int));
    printf("Varriables of type double occupy %u bytes\n", sizeof(double));
    printf("Varriables of type float occupy %u bytes\n", sizeof(float));
    printf("Varriables of type long occupy %u bytes\n", sizeof(long));
    printf("Varriables of type short occupy %u bytes\n", sizeof(short));
    printf("Varriables of type long long occupy %u bytes\n", sizeof(long long));
    printf("Varriables of type long double occupy %u bytes\n", sizeof(long double));
    printf("Varriables of type long int occupy %u bytes\n", sizeof(long int));
    //We can use %u or %zd in these print statements for sizeof operator

    return 0;
}

