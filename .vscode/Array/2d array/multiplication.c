#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], mul[2][2], s,i, j;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the no. for first matrix");
            scanf("%d", &a[i][j]);
        }
    }
    printf("first maticx is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (int d = 0; d < 2; d++)
    {
        for (int k = 0; k < 2; k++)
        {
            printf("enter the no. for second matrix");
            scanf("%d", &b[d][k]);
        }
    }
    printf("second matix is\n");
    for (int d = 0; d < 2; d++)
    {
        for (int k = 0; k < 2; k++)
        {
            printf("%d", b[d][k]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j<2; j++)
       {
        mul[i][j]=0;
        for (int s = 0; s < 2; s++)
        {
            mul[i][j]+=a[i][s]*b[s][j];
        }
        
       }
       
    }
    printf("after multiplying\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}