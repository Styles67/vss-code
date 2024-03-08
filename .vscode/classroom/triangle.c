#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter the first angle\n");
    scanf("%d" , &a);
     printf("enter the second angle\n");
    scanf("%d" , &b);
     printf("enter the third angle\n");
    scanf("%d" , &c);
    sum=a+b+c;
    if (sum==180)
    {
        printf("yes it is a triangle");
    }
    else{
        printf("chl sale its not a triangle");
    }
    return 0;
    
}