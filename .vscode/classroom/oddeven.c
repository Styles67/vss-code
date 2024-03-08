#include<stdio.h>
int main()
{
    int d;
    printf("enter the number\n");
    scanf("%d" , &d);
    if (d%2==0)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}