#include <stdio.h>

int main(void) {
    char c;

    printf("Enter a character: \n");
    scanf("%c", &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("Charcter %c is a lowercase vowel\n", c);

    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Charcter %c is a uppercase vowel\n", c);

    else
        printf("Character %c is not a vowel\n", c);

    return 0;
}
