#include <stdio.h>

#define TAB '\t'
#define BS '\b'
#define GT '>'
#define LT '<'
#define DASH '-'
#define NEWLINE '\n'

int main() {
    int inc;
    while ((inc = getchar()) != EOF) {
        if (inc == TAB) {
            putchar(GT);
            putchar(BS);
            putchar(DASH);
        }
        else if (inc == BS)
            putchar(LT);
        else 
            putchar(inc);
    }
}