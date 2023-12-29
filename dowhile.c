#include <stdio.h>

int main(void) {
    int num;
    long fact = 1;

    printf("Factorial values for numbers 1 thru 30\n");

    for (num = 1; num <= 20; num++) {
        fact = 1;
        for(int i = 1; i <= num; i++)
            fact *= i;

        printf("%d! is %ld\n", num, fact);
    }
    
    return 0;
}