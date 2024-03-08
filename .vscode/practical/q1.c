#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum,a,b,diff;
    float sum1,diff1,c,d;
    printf("enter both numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    printf("The sum and the difference are\n %d\n %d\n",sum,diff);
    printf("enter both numbers\n");
    scanf("%f%f",&c,&d);
    sum1=c+d;
    diff1=c-d;
    printf("The sum and the difference are\n %.1f\n %.1f",sum1,diff1);
    return 0;
}
