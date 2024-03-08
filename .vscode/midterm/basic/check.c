#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,sum;
    printf("enter the values\n");
    scanf("%d %d" , &a,&b);
    sum=a+b;
    printf("%d" , sum);
    if (a==b || b==a||a+b==30)
    {
        printf("\nTrue");
    }
    
    return 0;
}
