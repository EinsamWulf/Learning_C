// Computes the area and perimeter of a rectangle when given height and width
// Height and width are passed via command line, heigh first and then width


#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    double height = atoi (argv[1]);
    double width = atoi (argv[2]);
    double area = 0.0;
    double perimeter = 0.0;

    area = height * width;
    perimeter = 2.0 * (height + width);

    printf("Rectangle height is: %f\n", height);
    printf("Rectangle width is: %f\n", width);
    printf("The area of the rectangle is: %f\n", area);
    printf("The perimeter of the rectangle is: %f\n", perimeter);

    return 0;

}

// added to GitHub