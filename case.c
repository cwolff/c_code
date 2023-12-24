#include <stdio.h>

int main(void) {
    char ltr;

    printf("Enter a alpa character: ");
    scanf("%c", &ltr);

    if (ltr >= 'A' && ltr <= 'Z')
        printf("%c is upper case\n", ltr);
    else if (ltr >= 'a' && ltr <= 'z')
        printf("%c is lower case\n", ltr);
    else if (ltr >= '0' && ltr <= '9')
        printf("%c is a number\n", ltr);
    else
        printf("%c is a special character\n", ltr);
}