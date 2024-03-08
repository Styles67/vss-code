#include<stdio.h>
int square(int a)
{
    return (a*a);
}
int main()
{
    int a,n;
    printf("enter the number\n");
    scanf("%d", &a);
    n=square(a);
    printf("%d",n);
    return 0;
}
