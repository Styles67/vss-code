#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=0,y=1,i,s,n;
    printf("ENter the Number\n");
    scanf("%d" , &n);
    printf("%d %d\t", x,y);
    for ( i = 1; i <=n-2; i++)
    {
        s=x+y;
        printf("%d\t", s);
        x=y;
        y=s;
    }
    
    return 0;
}
