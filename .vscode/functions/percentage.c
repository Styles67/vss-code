#include<stdio.h>
float percentage(float);
int main()
{
    float s,m,sc,p,sum=0;
    printf("Enter the marks\n");
    scanf("%f",&s);
    printf("Enter the marks\n");
    scanf("%f",&m);
    printf("Enter the marks\n");
    scanf("%f",&sc);
    sum=s+m+sc;
    p=percentage(sum);
    printf("the percentage is %f", p);
    return 0;
}
float percentage(float sum)
{
    return ((sum/300)*100);
}