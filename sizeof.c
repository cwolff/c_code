#include <stdio.h>
#include <stdlib.h>
int main() {
    int intType;
    long int longintType;
    float floatType;
    double doubleType;
    long double longdoubleType;
    char charType;
    int *pointerType;

    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Size of long int: %d bytes\n", sizeof(longintType));
    printf("Size of float: %d bytes\n", sizeof(floatType));
    printf("Size of double: %d bytes\n", sizeof(doubleType));
    printf("size of long double: %d bytes\n", sizeof(longdoubleType));
    printf("Size of char: %d byte\n", sizeof(charType));
    printf("size of int*: %d bytes\n", sizeof(pointerType));

    return 0;
}