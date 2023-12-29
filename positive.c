#include <stdio.h>

int main(void) {
    int nbr;

    printf("Input a number: ");
    scanf("%d", &nbr);

    if (nbr > 0)
        printf("%d is positive\n", nbr);
    else if (nbr < 0)
        printf("%d is negative\n", nbr);
    else
        printf("%d is zero\n", nbr);

    return 0;
}