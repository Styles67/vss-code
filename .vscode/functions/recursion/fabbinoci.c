#include<stdio.h>
int fab(int);
int main(){
    int n,f;
    printf("enter the nth term : ");
    scanf("%d",&n);
    f=fab(n);
    printf("THE nth term is %d",f);
}
int fab(int n)
{
    if(n==0)
    return 0;
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fab(n-1)+fab(n-2);
    }
}