#include <stdio.h>

int main(void) {
    int i, j;

    for(i = 0; i < 10; i++)
        
    for(i = 1; i <= 10; i++) {
        for(j = 1; j<= 10; j++)
            printf("%5d", i*j);
        printf("\n");
    }
}