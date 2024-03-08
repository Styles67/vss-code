#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10][10], b[10][10], t[10][10], r, c;
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
    printf("\n Enter elemets of second array\n");
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
            t[i][j] = a[i][j] * b[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\t%d", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
