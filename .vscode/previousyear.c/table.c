#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int n = 1; n<=5; n++)
    {
        for (int i = 1; i <=10 ; i++)
    {
        printf("%d*%d=%d\t",n,i,n*i);
    }
    printf("\n");
    }
    
    return 0;
}
