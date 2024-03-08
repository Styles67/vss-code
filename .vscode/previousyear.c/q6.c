#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,x;
    printf("enter number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        x=n%10;
        printf("%d",x);
        n=n/10;

    }
    
    return 0;
}
