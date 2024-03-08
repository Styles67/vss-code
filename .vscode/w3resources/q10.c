#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,sum,a;
    printf("input the no of terms:");
    scanf("%d" , & n);
    for ( i = 1; i <=n; i++)
    {
        a=1/i;
        sum=sum+a;
        printf("%d" , a);
    }
    printf("sum is %d/n",sum);
    
    return 0;
}
