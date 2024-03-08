#include <stdio.h>
int factorial(number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int numb;

    printf("the number you want the factorial of you noob\n");
    scanf("%d", &numb);
    printf("the factorial of %d is %d", numb, factorial(numb));
    return 0;
}
