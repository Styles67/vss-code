#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, temp;
    int d[] = {34, 34, 12, 67, 35, 89, 90};
    int n = sizeof(d) / sizeof(d[0]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (d[j] > d[j + 1])
            {
                temp = d[j + 1];
                d[j + 1] = d[j];
                d[j] = temp;
            }
        }
    }
    printf("The Sorted array is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", d[i]);
    }

    return 0;
}
