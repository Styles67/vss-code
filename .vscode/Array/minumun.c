#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, min;
    int d[] = {34, 34, 12, 67, 35, 89, 90};
    min=d[0];
    int n = sizeof(d) / sizeof(d[0]);
    for (i = 1; i < n; i++)
    {
        if (min>d[i])
        {
            min=d[i];
        }
    }
    printf("%d\n", min);
    return 0;
}