#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10][10], b[10][10], r, c;
    printf("Enter the amount of rows and columns\n");
    scanf("%d%d", &r, &c);
    printf("\n Enter elemets of first array\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("after transpose\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", b[j][i]);
        }
        printf("\n");
    }

    return 0;
}
