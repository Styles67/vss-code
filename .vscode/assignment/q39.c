#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0, y = 1, n=5, s = 0;
    printf("%d\t %d",x,y);
    for (int i = 0; i < n; i++)
    {
        s = x + y;
        printf("%d\t", s);
        x = y;
        y = s;
    }

    return 0;
}