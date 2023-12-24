#include <stdio.h>

int main(void) {
    int sum = 0, num;
    int getNbr();

    while((num = getNbr()) != 0) 
        sum += num;
    
    printf("sum = %d\n", sum);

    return 0;
}

int getNbr() {
    int nbr;
    printf("Enter number (enter zero to terminate): ");
    scanf("%d", &nbr);
    return nbr;
}