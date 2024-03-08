#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=1,mul;
    printf("Enter the number\n");
    scanf("%d", & n);
    for ( i = 1; i <=10; i++)
    {
        mul=n*i;
        printf("%d*%d\n=%d\n",n,i,mul);
    }
    
    return 0;
}
