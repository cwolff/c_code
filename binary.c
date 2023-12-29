#include <stdio.h>

int main(void) {
    unsigned short num, savenum;
    char binary[17] = "0000000000000000"; /* inititialize 16 but binary string to zero */
    char *p = binary; /* point to beginning of 16 bit string */

    p += 15; /* point to end of 16 bit string */

    printf("Enter decimal number of 65535 or less to convert to 16 bit binary number\n");
    scanf("%d", &num); /* prompt for decimal number of 65535 or less */
    savenum = num;

    /* convert from deciaml to binary */
    while(num != 0) {
        *p = (num % 2) + '0';
        /* printf("%s\n", binary); /* used to validate conversion */
        p--;
        num /= 2;
    }

    /* display original decimal number and binary equicalent */
    printf("decimal = %d, binary = %s\n",savenum, binary);

    return 0;
}