#include <stdio.h>
int main() {
    int x, y;
    float avg;
    printf("Enter 2 numbers:");
    scanf("%d%d", &x, &y);
    avg = (x + y) / 2.0;
    printf("The average of %d and %d is %f\n", x, y, avg);

    return 0;
}