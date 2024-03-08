#include <stdio.h>
int main()
{
    int a = 1, b = 100;
    while (a != b)
    {
        if (a % 2 == 0)

            printf("\n  %d", a);
        a++;
    }

    return 0;
}