#include <stdio.h>
int main()
{
    float a, b, c, d,avg, pro, mul;
    
    printf("Enter the value of item 1 : ");
    scanf("%f", &a);
    printf("Enter the value of item 2 : ");
    scanf("%f", &b);
    printf("Enter the no. of item 1 : ");
    scanf("%f", &c);
    printf("Enter the no of item 2 : ");
    scanf("%f", &d);
    pro = a * c;
    mul = b * d;
    avg = ((pro + mul) / (c + d));
    printf("Average is %f", avg);
    return 0;
}
