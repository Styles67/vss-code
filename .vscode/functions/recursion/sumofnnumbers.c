#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("the sum is %d",sum(5));
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumnm1 = sum(n-1);//sum of n-1
    int sumn=sumnm1+n;//sum of n

return sumn;
}