#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    long int factorial=1;
    printf("enter the number\n");
    scanf("%d" , & n);
    for ( i =1; i <=n; i++)
    {
        
        factorial=factorial*i;
    }
    printf("%d", factorial);
    
    return 0;
}

