#include <stdio.h>

#define SPACE   ' '
#define TAB     '\t'
#define NL      '\n'
#define TRUE    1
#define FALSE   0

int main(void) {
    int ws;
    char c, lc;

    while ((c = getchar()) != EOF) {
        if (c == SPACE || c == TAB || c == NL) {
            if (ws != TRUE) {
                ws = TRUE;
                putchar('\n');
            }
        }
        else {
            ws = FALSE;
            putchar(c);
        }
    }
    return 0;
}