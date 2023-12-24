#include <stdio.h>
int main() {
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    // Calculating product
    product = a * b;

    // Results up to 2 decimal points is displayed using %.2lf
    printf("Product = %.4lf\n", product);

    return 0;
}