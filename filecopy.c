#include <stdio.h>

int main() /* copy input to output; 1st version */
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}