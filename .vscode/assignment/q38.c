#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,sum=0,j,i,temp;
    printf("Enter the first number ");
    scanf("%d", & a);
    printf("Enter the second number number ");
    scanf("%d", & b);
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    
   for (int i = a; i < b; i++)
   {
    if (i%2!=0)
    {
        sum=sum+i;
    }
    
   }
   printf("sum is %d",sum);
    
}
