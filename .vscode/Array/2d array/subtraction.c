#include <stdio.h>
int main()
{
    int a[2][3], b[2][3], t[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the no. for first matrix");
            scanf("%d", &a[i][j]);
        }
    }
    printf("first maticx is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (int d = 0; d < 2; d++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("enter the no. for second matrix");
            scanf("%d", &b[d][k]);
        }
    }
    printf("second matix is\n");
    for (int d = 0; d < 2; d++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d", b[d][k]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[i][j] = a[i][j] - b[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}