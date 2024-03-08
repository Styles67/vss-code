#include <stdio.h>
int fact(int);
int main(int argc, char const *argv[])
{
    int a, f;
    printf("enter number\n");
    scanf("%d", a);
    f = fact(a);
    printf("factorila is %d", f);
    return 0;
}
int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}