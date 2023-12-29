#include <stdio.h>

int main(void) {
    int cnt = 1, num;

    printf("enter a positive number: ");
    scanf("%d", &num);

    while((num /= 10) != 0)
        cnt++;

    printf("The number of digits is %d\n", cnt);

    return 0;
}