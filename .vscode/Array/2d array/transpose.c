#include <stdio.h>
int main()
{
    int a[2][3], t[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the no. for first matrix ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("first maticx is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("the transposed matrix is \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}