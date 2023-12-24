#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

int main() {
    int space = 0;
    int inc = 0;
    while ((inc = getchar()) != EOF) {
        if (inc == SPACE && space == 0)
            space = 1;
        else if (inc == SPACE && space == 1)
            inc = 0;
        else 
            space = 0;

        putchar(inc);
    }
}