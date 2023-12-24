#include <stdio.h>
int main() {
    int number, sum;
    float pi = 3.1415;
    char ch = 'A';

    printf("enter 2 numbers and a character:");
    scanf("%d %d %c", &number, &sum, &ch);

    printf("number = %d and sum is %d and character is '%c'\n", number, sum, ch);
    //printf("PI is %f\n", pi);
    //printf("char is %c\n", ch);
}