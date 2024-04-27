/*
Author: Arun Agarwal
Purpose: This program is going to calculate the area and perimeter of a rectangle
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Declaring Variables
    int numberOfArguments = argc;
    char *arg1 = argv[0];
    double height = atof(argv[1]);
    double width = atof(argv[2]);
    double perimeter = 2.0*(height+width);
    double area = (width)*(height);

    //Displaying Output:
    printf("The Height of the rectangle is %.3f\n", height);
    printf("The Width of the rectangle is %.3f\n", width);
    printf("The Perimeter of the rectangle is %.2f\n", perimeter);
    printf("The Area of the rectangle is %.2f\n", area);
    printf("Finally, the name of the Program is %s\n", arg1);
    return 0;
}
