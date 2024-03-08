#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("enter the number\n");
    scanf("%d\n%d", &a, &b);
    for (int i = 0; i < 10; i++)
    {
        if (1 <= i <= 9)
        {
            if (i == 1)
            {
                printf("one");
            }

            if (i == 2)
            {
                printf("two");
            }

            if (i == 3)
            {
                printf("three");
            }

            if (i == 4)
            {
                printf("four\n");
            }

            if (i == 5)
            {
                printf("Five");
            }

            if (i == 6)
            {
                printf("six");
            }

            if (i == 7)
            {
                printf("seven");
            }

            if (i == 8)
            {
                printf("eight");
            }

            if (i == 9)
            {
                printf("nine");
            }
        }
    }
    return 0;
}
