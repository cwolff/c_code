#include <stdio.h>

int mymult(a, b)
    int a,b;
 {
    int c = a * b;
    return c;
}

int main() {
    int mymulti();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n", retval);
}

