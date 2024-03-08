#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    printf("Enter the output\n");
    scanf("%d", & n);
    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1; j <=n-i+1; j++)
        {
            printf(" %d" , j);
        }
        printf("\n");
    }
    
    return 0;
}
