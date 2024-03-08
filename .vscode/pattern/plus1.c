#include <stdio.h>
int main(int argc, char const *argv[])
{

    int i, j, n,k=1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)

            printf("%d\t", k=k+1);
        printf("\n");
    }

    return 0;
}
