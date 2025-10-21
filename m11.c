#include <stdio.h>

int main()
{
    char a, b, c;

    printf("Enter first character: ");
    scanf(" %c", &a);

    printf("Enter second character: ");
    scanf(" %c", &b);

    printf("Enter third character: ");
    scanf(" %c", &c);

    printf("Characters in reverse order: %c %c %c\n", c, b, a);

    return 0;
}
