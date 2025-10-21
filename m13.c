#include <stdio.h>

int main()
{
    float num1, num2, min;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    min = (num1 < num2) ? num1 : num2;

    printf("Minimum number = %.2f\n", min);

    return 0;
}
