#include <stdio.h>

int main()
{
    int m1, m2, m3;
    float tot, per;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    tot = m1 + m2 + m3;
    per = tot / 3;

    printf("\nTotal Marks = %.2f", tot);
    printf("\nPercentage = %.2f%%\n", per);

    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
    {
        if (per >= 60)
            printf("Division = First\n");
        else if (per >= 48)
            printf("Division = Second\n");
        else if (per >= 36)
            printf("Division = Pass\n");
        else
            printf("Division = Fail\n");
    }
    else
    {
        printf("Division = Fail\n");
    }

    return 0;
}
