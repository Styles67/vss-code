#include <stdio.h>
int main()
{
    int a[10][10],sum[10][10],r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r, &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter element");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; i < c; j++)
        {
            sum[i][j]=a[i][j]+a[i][j];
        }        
    }
    printf("%d",sum[i][j]);
    return 0;
}