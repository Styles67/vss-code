#include <stdio.h>
void convert(int);
void main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    convert(n);
}
void convert(int n)
{
    int rem, bin = 0, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        bin = bin + rem * i;
        n = n / 2;
        i = i * 10;
    }

    printf("%d", bin);
}