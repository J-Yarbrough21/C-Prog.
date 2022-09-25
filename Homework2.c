#include <stdio.h>
#include <math.h>

// prototype for distance function
double double_dist_func(double x1, double y1, double x2, double y2);

// begins program execution and gets user input
int main(void) /* NO GLOBAL VARIABLES.  LIMIT SIZE OF GRAPH GRID? */
{

    double x1;   // first coordinate entered by the user
    double y1;   // second coordinate entered by the user
    double x2;   // third coordinate entered by the user
    double y2;   // fourth coordinate entered by the user
    double dist; // the distance between two points

    printf(" In this program you will enter the x and y coordinates for \n ");
    printf(" 2 points and it will tell you the distance between them. ");

    printf(" Please enter a number for the first x coordinate. ");
    scanf("%lf", &x1);
    printf("You have entered: %lf ", x1);

    printf(" Please enter a number for the first y coordinate. ");
    scanf("%lf", &y1);
    printf("You have entered: %lf ", y1);

    printf(" Please enter a number for the second x coordinate. ");
    scanf("%lf", &x2);
    printf("You have entered: %lf ", x2);

    printf(" Please enter a number for the second y coordinate. ");
    scanf("%lf", &y2);
    printf("You have entered: %lf ", y2);
    // call your function with args here and store to a variable called dist.

    printf(" The distance between the points is: %lf ", dist);
}

// Describe what the function does
// Describes the inputs and their order, and tells their data types
// Describes the return value and its data type
// Describes how the function does what it does
double double_dist_func(double x1, double y1, double x2, double y2)
{
    double distance;
    double dist;
    distance = sqrt(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return dist;
    // scanf("%lf", &dist);
}

/* eof */

/*
You will write a program that asks the user for the X and Y coordinates of two
points on a 2-D plane, and then tells the user the distance between the points.

You will need to use the C-library square root function sqrt(),
which will require you to  #include <math.h>.
Do some internet searching on this function to learn how to use it.

Use a function prototype and define your function after main()

You may NOT use global variables
Users should be asked for inputs in main(), NOT in your function.

Your program MUST use a separate function to compute the distance from the
coordinates entered.
distance = the square root of (x2-x1)^2 + (y2-y1)^2

Just above your function definition, include comments which
◦ Describe what the function does
◦ Describes the inputs and their order, and tells their data types
◦ Describes the return value and its data type
◦ Describes how the function does what it does

Upload just the code, no need to upload the executable.
*/