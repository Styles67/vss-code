#include<stdio.h>
int main(int argc, char const *argv[])
{
    int average,sum=0,n=5;
    for (int i = 0; i <=n; i++)
    {
        printf("Enter the integer\n");
        scanf("%d" , &i);
        sum=sum+i;
        average=sum/n;
    }
    printf("sum is %d\n" , sum);
    printf("average is %d", average);
    
    return 0;
}
