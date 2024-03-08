#include<stdio.h>
int main(int argc, char const *argv[])
{
    int factorial=1,n;
    printf("enter the number\n");
    scanf("%d" ,&n);
    for (int i = 1; i <=n; i++)
    {
        factorial =factorial * i;
    }
    printf("%d",factorial);

    return 0;
}
