#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, n, sum = 0;
    printf("Enter the number");
    scanf("%d", &n);
    for (int i = 0; i < n;)
    {
        x = n % 10;
        sum = sum + x;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}
