#include <stdio.h>
int main()
{
    int n,f=1, i;
    
    printf("enter the number\n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
         f = f * i;

    }
    printf("factorial is %d", f);

       
    return 0;
}