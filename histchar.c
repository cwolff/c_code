#include <stdio.h>
#include <stdlib.h>

#define SPACE   ' '
#define TAB     '\t'
#define NL      '\n'
#define TRUE    1
#define FALSE   0
#define MAXCHAR 128

int main(void) {
    int ws = FALSE, index = 0;
    char c, lc;
    int histchar[MAXCHAR];

    /* initizlize values to zero */
    for(int i = 0; i <= 128; i++)
        histchar[i] = 0;


    while ((c = getchar()) != EOF) {
        if (((int) c) <= 128) { 
            index = (int) c;
            //printf("c = %c, index = %d, histchar[index] = %d\n",c, index, histchar[index]);
            (histchar[index])++;
            //printf("c = %c, index = %d, histchar[index] = %d\n",c, index, histchar[index]);
        }
    }

    for(int i = 0; i < MAXCHAR; i++) {
        //printf("i = %d, histchar[i] = %d", i, histchar[i]);
        printf("%c = ", (char) i);
        for(int j = 0; j < histchar[i]; j++) {
            //printf("i = %d, j = %d histchar[j] = %d\n",i, j, histchar[i]);
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}