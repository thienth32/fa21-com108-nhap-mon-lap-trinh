#include <stdio.h>

int main() {
    char c;
    char d;
    printf("Lan 1: ");
    scanf("%c", &c);
    scanf("%c", &d);
    fflush(stdin);
    printf("%d\n", c);

    printf("Lan 2: ");
    scanf("%c", &c);
    fflush(stdin);
    printf("%d\n", c);
    return 0;
}
