#include <stdio.h>
int main()
{
    int h, i, a;

    for (int j = 1; j <= 10; j++)
    {
        printf("\n enter the employee detail\n");
        scanf("%d", &h);
        for (i = h; i > 40;)
        {
            i = i - 40;
            a = i * 12;
            printf("\n%d", a);
          
        }
    }

    return 0;
}
