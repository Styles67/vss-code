#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0,x;
    printf("Enter a 3 digit number\n");
    scanf("%d", &n);
    for ( int i = 0; i < n;)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
       printf("The sum is %d", sum);
    return 0;
}
