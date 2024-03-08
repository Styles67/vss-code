#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,sum;
    printf("Enter the integers\n");
    scanf("%d%d",&a,&b);
    if (a>=10 && a<=20 || b>=10 && b<=20 )
    {
        printf("18");
    }
    else{
        sum=a+b;
        printf("sum is %d",sum);
    }
    return 0;
}
