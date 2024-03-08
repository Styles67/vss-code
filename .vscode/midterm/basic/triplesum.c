#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,sum,xxx;
    printf("Enter the first value\n");
    scanf("%d" , &a);
    printf("Enter the second value\n");
    scanf("%d" , &b);
    sum=a+b;
    printf("%d is the sum" , sum);
    if (a==b)
    {
        xxx=3*sum;
        printf("\n");
        printf("%d is the new sum. ENJOY " , xxx);
    }
    
    return 0;
}
