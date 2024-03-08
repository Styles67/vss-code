#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, max;
    int d[] = {34, 34, 12, 67, 35, 89, 90};
    max=d[0];
    int n = sizeof(d) / sizeof(d[0]);
    for (i = 1; i < n; i++)
    {
        if (max<d[i])
        {
            max=d[i];
        }
    }
    printf("%d\n", max);
    return 0;
}