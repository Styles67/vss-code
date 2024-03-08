#include<stdio.h>
int main()
{
    int x,n,product=1;
    printf("enter the number\n");
    scanf("%d", &n);
    while (n!=0)
    {
        x=n%10;
        product=x*product;
        n=n/10;
     
    }
       printf("%d", product);
    return 0;
    
}