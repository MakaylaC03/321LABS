#include <stdio.h>

/*
The purpose of directives in this code is to create variables that cannot be changed inside the main body of the code.
In this code, the macros, with the exception Square, are treated as variables/constants within the code.
*/





int main() {
    // Variables to hold areas
    float circle_area, square_area, rectangle_area, SQUARE_SIDE, RECTANGLE_LENGTH, RECTANGLE_WIDTH, SQUARE;
    const float PI = 3.14159;

    SQUARE_SIDE = 5.2;
    RECTANGLE_LENGTH = 4.5;
    RECTANGLE_WIDTH = 1.5;
    SQUARE= SQUARE_SIDE*SQUARE_SIDE;


    // Calculate area of circle
    circle_area = PI * (SQUARE_SIDE / 2) * (SQUARE_SIDE / 2);

    // Calculate area of square
    square_area = SQUARE;

    // Calculate area of rectangle
    rectangle_area = RECTANGLE_LENGTH * RECTANGLE_WIDTH;

    // Print calculated areas
    printf("Area of Circle: %.2f\n", circle_area);
    printf("Area of Square: %.2f\n", square_area);
    printf("Area of Rectangle: %.2f\n", rectangle_area);

    return 0;
}
