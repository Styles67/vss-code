#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=1,j=1,mul;
    printf("Enter the number from 1 to : \n");
    scanf("%d", & n);
    for ( i = 1; i <=10; i++)
    {
        for ( j =1; j<=n; j++)
        {
             
             mul=i*j;
             
        printf("%d\t", mul);
        
        }
        printf("\n");
        
       
       
    }
    
    return 0;
}
    