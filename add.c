#include <stdio.h>
<<<<<<< HEAD
/* Main */
=======

>>>>>>> ad2c2fea56bf5b67fa4fe67b63b361c97f9a238d
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
<<<<<<< HEAD
}
=======
}
>>>>>>> ad2c2fea56bf5b67fa4fe67b63b361c97f9a238d
