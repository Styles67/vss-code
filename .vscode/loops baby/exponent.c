#include <stdio.h>
int main()
{
    int a, b,j, i;
    
        printf("enter the first no.\n");
        scanf("%d", &a);
        printf("enter the second no.\n");
        scanf("%d", &b);
          j=a;
        for (i = 1; i < b; i++)
        {
           a=a*j;
        }
        printf("%d", a);
    
    return 0;
}
