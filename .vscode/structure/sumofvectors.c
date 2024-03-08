#include <stdio.h>
struct vectors
{
    int a;
    int b;
};
void sum();

int main()
{
    struct vectors v1 = {6, 7};
    struct vectors v2 = {5, 8};
    struct vectors sum = {0};
    sum(v1, v2, sum);
    return 0;
}
void sum(struct v1, struct v2, struct sum)
{
    sum.a = (v1.a + v2.a);
    sum.b = (v1.b + v2.b);
    printf("sum of x vector is %d\n", sum.a);
    printf("sum of y vector is %d\n", sum.b);
}
