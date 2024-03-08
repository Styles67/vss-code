#include <stdio.h>
int main(int argc, char const *argv[])
{
    char t;
    int n, p, o;
    float ta, d;
    printf("enter the product type\n");
    scanf("%s", &t);
    printf("enter the product number\n");
    scanf("%d", &n);
    printf("order amount\n");
    scanf("%d", &o);
    if (t == 'A')
    {
        if (n == 1)
        {
            if (o < 700)
            {
                d = (o * 5) / 100;
                printf("\n discount is %f", d);
                ta = o - d;
                printf("\n total aount is %f", ta);
            }
        }
        else if (n == 2)
        {
            if (n < 700)
            {
                d = (o * 7.5) / 100;
                printf("\n discount is %f", d);
                ta = o - d;
                printf("\n total aount is %f", ta);
            }
        }
    }

    return 0;
}
