#include<stdio.h>
void fab(int);
int main(int argc, char const *argv[])
{
    int x=0,y=1,n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("%d %d ",x,y);
    fab(n);
    return 0;
}
void fab(int n)
{
    int s=0,x=0,y=1;
    for (int  i = 0; i < n; i++)
    {
        s=x+y;
    printf("%d ",s);
    x=y;
    y=s;    
    }
}