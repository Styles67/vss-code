#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0,mul=1,n,x;
    printf("ENter the number\n");
    scanf("%d", &n);

    if (n %2==0)
    {
        printf("number is even");
        while (n!=0)
        {
            x=n %10;
            sum=sum+x;
            x=n/10;
        }
        printf("%d",sum);
    }
    else{
        printf("number  is odd");
        while (n!=0)
        {
            x=n %10;
            mul=mul*x;
            x=n/10;
        }
        printf("%d",mul);
    }
    return 0;
}
