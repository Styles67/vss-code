#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10][10], b[10][10], mul[10][10], r, c, k;
    printf("Enter the no of rows\n");
    scanf("%d", &r);
    printf("enter no of colums\n");
    scanf("%d", &c);
    printf("elemnet of 1st row\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("elements of 2nd row\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
         for (int j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
