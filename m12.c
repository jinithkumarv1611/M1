#include <stdio.h>

int main()
{
    int A;

    printf("Enter a number: ");
    scanf("%d", &A);

    if (A > 0)
    {
        printf("%d is a positive number.\n", A);
    }
    else
    {
        printf("%d is not a positive number.\n", A);
    }

    return 0;
}
