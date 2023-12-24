#include <stdio.h>
#include <string.h>

int main() {
    char str[9] = "r";
    int strLen = strlen(str);
    char revStr[strLen];
    int i;

    revStr[strLen] = 0;
    for (i = strLen; i >= 0; --i) {
        revStr[strLen - i] = str[i-1];
        /* printf("strLen = %d, strLen - i = %d, str[i] = %c, revStr = %s\n", strLen, (strLen - i), str[i], revStr); */
    }
    
    printf("Str = %s, revStr = %s\n", str, revStr);
}