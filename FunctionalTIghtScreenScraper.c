#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159 /* PI Constant */

int main(void) {
    double radius;
    double area;
    double circum;

    /* Get the readius */
    printf("Enter radius> ");
    scanf("%lf", &radius);

    /* Calculate the area */
    area = PI * radius * radius;

    /* Calculate the curcumference */
    circum = 2 * PI * radius;

    /* Display the area and curcumference */
    printf("the area is %.4f\n", area);
    printf("The curcumerence is %.4f\n", circum);

    return 0;
}