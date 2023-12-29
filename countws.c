#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

int main() {
    int count = 0;
    int inc = 0;
    while ((inc = getchar()) != EOF)
        if (inc == SPACE || inc == TAB || inc == NEWLINE)
            count++;
    printf(" count = %d;", count);
}