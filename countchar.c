#include <stdio.h>

int main() /* count characters in input */
{
    long nc;

    nc = 0;
    while (getchar() != 'Z')
        ++nc;
    printf("%ld\n", nc);
}