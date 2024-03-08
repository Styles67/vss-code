#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,n,a,sum;
    printf("Enter the number\n");
    scanf("%d",& n);
    for ( i = 1; i <=n; i++)
    {
        a=i*2;
        sum=sum+a;
        printf("%d " , a);
    }
    
    printf("\n%d", sum);
    
    return 0;
}
