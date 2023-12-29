#include <stdio.h>

/* 
    print Fahrenheit-Clsius table
    forf = 0, 20, ..., 300
 */

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit of tabvle */
#define STEP 20     /* step size */
int main()
{
    int fahr;

    printf("Fahrenheit\tCelsius\n");
    /*
    while (fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f\t\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    */
   for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%4d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}