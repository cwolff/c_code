#include <stdio.h>

#define SPACE   ' '
#define TAB     '\t'
#define NL      '\n'
#define TRUE    1
#define FALSE   0
#define MAXWORDLENGTH 11
#define MAXNBRWORDS 15

int main(void) {
    int ws = FALSE, wc = 0, wl = 0, maxhist = MAXNBRWORDS, maxwl = MAXWORDLENGTH;
    char c, lc;
    int hist[MAXNBRWORDS];
    int overflowcounter = 0;


    while ((c = getchar()) != EOF) {
        if (c == SPACE || c == TAB || c == NL) {
            if (ws != TRUE) {
                ws = TRUE;
                hist[wc] = wl;
                //printf("hist[wc] = %d, wl = %d ", hist[wc], wl);
                wl = 0;
                wc++;
                //printf("wc = %d\n", wc);
                //putchar('\n');
            }
        }
        else {
            ws = FALSE;
            wl++;
            //putchar('*');
        }
    }

    /*
    for(int i = 0; i < wc; i++) {
        for(int j = 0; j < hist[i]; j++)
            putchar('*');
        putchar('\n');
    }
    */

    for(int j = MAXWORDLENGTH; j > 0; j--) {
        for(int i = 0; i < wc; i++)
            if (hist[i] >= j) {
                putchar('*');
                putchar(' ');
            }
            else {
                putchar(' ');
                putchar(' ');
            }
        putchar('\n');
    }


    return 0;
}