#include <stdio.h>

int main(void) {
    int c, count = 0;

    while((c = getchar()) != '`') {
        putchar(c);
        count++;
        if (c == '^') {
            printf(" char count = %d ----------------------------------------\n", count);
            count = 0;
            continue;
        }
    }
    putchar(c);
    printf(" char count = %d ----------------------------------------\n", count);
}