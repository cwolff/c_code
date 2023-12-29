#include <stdio.h>

int main(void) {
    int nbr;

    printf("Enter a number: ");
    scanf("%d",&nbr);

    if (nbr % 2 == 0)
        printf("%d is even\n", nbr);
    else
        printf("%d is odd\n", nbr);
}