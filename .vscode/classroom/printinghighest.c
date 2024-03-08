#include <stdio.h>
int main()
{
    int a, b, c, highest;
    printf("enter the first number\n");
    scanf("%d", &a);

    printf("enter the second number\n");
    scanf("%d", &b);

    printf("enter the third number\n");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        highest=a;
    }
    else if (b >= a && b >= c)
    {
       highest=b;
    }
    else
    {
      highest=c;
    }
    printf("%d is the highest number", highest);

    return 0;
}