#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, i = 1, sum;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("%d " , (2*i)-1);
        sum=sum+((2*i)-1);
    }
    printf(" \n sum is %d",sum);

    return 0;
}
