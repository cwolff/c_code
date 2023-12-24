#include <stdio.h>

int main() {
    int first = 1;
    int val, maxval, minval;
    char str[1001];

    while(gets(str) != 'done') {
        val = atoi(str);
        if(first || val > maxval) maxval = val;
        if(first || val < minval) minval = val;
        first = 0;
    }

    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}