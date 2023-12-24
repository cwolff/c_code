#include <stdio.h>

int main(void) {
    float value1, value2;
    char operator;
    
    printf("Type in your experssion.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch(operator) {
        case '+':
            printf("%f %c %f = %.2f\n",value1, operator, value2, value1 + value2);
        break;

        case '-':
            printf("%f %c %f = %.2f\n",value1, operator, value2, value1 - value2);
        break;

        case '*':
            printf("%f %c %f = %.2f\n",value1, operator, value2, value1 * value2);
        break;

        case '/':
            if (value2 == 0)
                printf("%f %c %f = undefined, division by zero error\n",value1, operator, value2);
            else
                printf("%f %c %f = %.2f\n",value1, operator, value2, value1 / value2);
        break;

        default:
            printf("Missing or invalid operator\n");
        break;
        
    }

}