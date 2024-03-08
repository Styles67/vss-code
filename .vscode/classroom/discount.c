#include <stdio.h>
int main()
{
    int a;
    printf("enter the amount\n");
    scanf("%d", &a);
    if (a > 0 && a < 1000)
        
    {
        a = (a - (a * 5) / 100);
        printf("%d is the new amount\n", a);
    }
    if (a > 1000 && a < 10000)
        
    {
        a = (a - (a * 8) / 100);
        printf("%d is the new amount\n", a);
    }
    if (a > 10000 && a < 15000)
        
    {
        a = (a - (a * 10) / 100);
        printf("%d is the new amount\n", a);
    }
    if (a > 15001 && a < 20000)
        
    {
        a = (a - (a * 100) / 100);
        printf("%d is the new amount\n", a);
    }
    else
    {
        printf("%d is the new amount\n" , a);
    }
    return 0;
}