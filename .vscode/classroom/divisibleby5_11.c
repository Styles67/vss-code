#include<stdio.h>
int main()
{
    int numb;
    printf("enter a number\n");

    scanf("%d", &numb);
    if (numb % 5==0 && numb % 11==0)
    {
        printf("%d is divisible by both 5 and 11\n", numb);
    }
    else{
        printf("%d is not divisble by both 5 and 11\n", numb);
    }
    return 0;
}