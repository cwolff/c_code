#include <stdio.h>
int main() {
    char line[1001];
    printf("enter line\n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
}
